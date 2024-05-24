import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;
//BOJ 16194 [카드 구매하기 2]
public class boj_16194 {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		int cards[] = new int[N + 1];
		int dp[] = new int[N + 1];
		
		String input[] = br.readLine().split(" ");
		for(int i=1; i<=input.length; i++) {
			cards[i] = Integer.parseInt(input[i-1]);
		}
		for(int i=1; i<=N; i++) {
			dp[i] = cards[i];
			for(int j=1; j<=i/2; j++) {
				dp[i] = Math.min(dp[i], dp[j] + dp[i-j]);
			}
		}
		System.out.println(dp[N]);
    }
}