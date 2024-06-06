import java.io.*;
//BOJ 2156 [포도주 시식]
public class boj_2156 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] dp = new int[10001];
        int[] arr = new int[10001];

        int len = Integer.parseInt(br.readLine());
        for (int i = 1; i <= len; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }

        dp[0] = 0;
        dp[1] = arr[1];
        dp[2] = arr[1] + arr[2];
        for (int i = 3; i <= len; i++) {
            dp[i] = Math.max(Math.max(arr[i] + arr[i - 1] + dp[i - 3], arr[i] + dp[i - 2]), dp[i - 1]);
        }
        System.out.println(dp[len]);
        br.close();
    }
}