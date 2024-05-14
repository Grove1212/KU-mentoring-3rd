import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;

//BOJ 10844 [쉬운 계단 수]
public class boj_10844 {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		final int mod = 1_000_000_000;
		long dp[][] = new long[101][10];
		
		for(int i=1; i<=9; i++) {
			dp[1][i] = 1;
		}
		
		for(int i=2; i<=100; i++) {
			for(int j=0; j<=9; j++) {
				if(j == 0) {
					dp[i][j] = dp[i-1][j+1];
				}
				else if(j == 9) {
					dp[i][j] = dp[i-1][j-1];
				}
				else {
					dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1];
				}
				dp[i][j] = dp[i][j] % mod;
			}
		}
		
		
		int N = Integer.parseInt(br.readLine());
		int sum = 0;
		for(int i=0; i<=9; i++) {
			sum += dp[N][i];
			sum = sum % mod;
		}
		System.out.println(sum);
    }
}