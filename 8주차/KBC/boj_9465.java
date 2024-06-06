import java.io.*;
//BOJ 9465 [스티커]
public class boj_9465 {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        for(int i=0; i<N; i++) {
            int len = Integer.parseInt(br.readLine());
            int[][] arr = new int[len+1][2];
            int[][] dp = new int[len+1][2];

            String[] input1 = br.readLine().split(" ");
            String[] input2 = br.readLine().split(" ");
            for(int n=0; n<len; n++) {
                arr[n+1][0] = Integer.parseInt(input1[n]);
                arr[n+1][1] = Integer.parseInt(input2[n]);
            }

            dp[1][0] = arr[1][0];
            dp[1][1] = arr[1][1];
            for(int n=2; n<=len; n++) {
                dp[n][0] = arr[n][0] + Math.max(dp[n-1][1], dp[n-2][1]);
                dp[n][1] = arr[n][1] + Math.max(dp[n-1][0], dp[n-2][0]);
            }
            System.out.println(Math.max(dp[len][0], dp[len][1]));
        }
        br.close();
    }
}