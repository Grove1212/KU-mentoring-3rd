import java.io.*;

//BOJ 1912 [연속합]
public class boj_1912 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int[] dp = new int[N+1];
        int[] sequence = new int[N+1];

        String[] input = br.readLine().split(" ");
        for(int i=1; i<=N; i++) {
            sequence[i] = Integer.parseInt(input[i-1]);
        }

        for(int i=1; i<=N; i++) {
            dp[i] = Math.max(sequence[i], dp[i-1] + sequence[i]);
        }

        int max = dp[1];
        for(int i=1; i<=N; i++) {
            if(max < dp[i]) {
                max = dp[i];
            }
        }
        System.out.println(max);
    }
}