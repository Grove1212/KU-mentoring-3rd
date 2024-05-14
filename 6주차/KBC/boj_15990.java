import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;

//BOJ 15990 [1,2,3 더하기 5]
public class boj_15990 {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		final int mod = 1_000_000_009;
		int T = Integer.parseInt(br.readLine());
		long dp[][] = new long[100_001][4];
		
		dp[1][1] = 1; dp[1][2] = 0; dp[1][3] = 0;
		dp[2][1] = 0; dp[2][2] = 1; dp[2][3] = 0;
		dp[3][1] = 1; dp[3][2] = 1; dp[3][3] = 1;
		dp[4][1] = 2; dp[4][2] = 0; dp[4][3] = 1;
		for(int i=5; i<=100_000; i++) {
			dp[i][1] = (dp[i-1][2] + dp[i-1][3]) % mod;
			dp[i][2] = (dp[i-2][1] + dp[i-2][3]) % mod;
			dp[i][3] = (dp[i-3][1] + dp[i-3][2]) % mod;
		}
		
		for(int i=0; i<T; i++) {
			int N = Integer.parseInt(br.readLine());
			long sum = (dp[N][1] + dp[N][2] + dp[N][3]) % mod;
			sb.append(sum).append("\n");
		}
		System.out.println(sb);
    }
}