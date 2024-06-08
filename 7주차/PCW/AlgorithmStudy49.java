// BOJ_2225 합분해
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class AlgorithmStudy49 {
	static long mod = 1_000_000_000;
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		int N = Integer.parseInt(st.nextToken());
		int K = Integer.parseInt(st.nextToken());
		long[][] dp = new long[N+1][K+1];
		for(int i = 0; i <= N; i++) {
			dp[i][1] = 1;
		}
		
		for(int i = 2; i <= K; i++) {
			for(int j = 0; j <= N; j++) {
				for(int k = 0; k <= j; k++) { //k를 더해서 j 만듦
					dp[j][i] += dp[j-k][i-1];
					dp[j][i] %= mod;
				}
			}
		}
		System.out.println(dp[N][K]);
	}
}