import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

//BOJ 11053 [가장 긴 증가하는 부분 수열]
public class boj_11053 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int[] dp = new int[N + 1];
        String[] input = br.readLine().split(" ");

        int[] sequence = new int[N + 1];
        for (int i = 1; i <= input.length; i++) {
            sequence[i] = Integer.parseInt(input[i - 1]);
        }

        int max = 0;
        for (int i = 1; i <= N; i++) {
            dp[i] = 1;
            for (int j = i - 1; j >= 0; j--) {
                if (sequence[i] > sequence[j]) {
                    dp[i] = Math.max(dp[i], dp[j] + 1);
                }
            }
            max = Math.max(dp[i], max);
        }
        System.out.println(max);
    }
}
