import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

//BOJ 1699 [제곱수의 합]
public class boj_1699 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[] dp = new int[100001];

        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            dp[i] = i;
            if (Math.sqrt(i) == (int) Math.sqrt(i)) {
                dp[i] = 1;
                continue;
            }
            for (int j = 1; j * j < i; j++) {
                dp[i] = Math.min(dp[i], dp[i - (j * j)] + 1);
            }
        }
        System.out.println(dp[n]);
    }
}