import java.io.*;

public class BOJ_10844_쉬운계단수 {
	static final int MOD = 1000000000;
	static long arr[][] = new long[101][10];

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		// DP
		// 초깃값 설정
		for (int i = 1; i < 10; i++) {
			arr[1][i] = 1;
		}

		for (int i = 2; i < 101; i++) {
			arr[i][0] = arr[i - 1][1];
			for (int j = 1; j <= 8; j++) {
				arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % MOD;
			}
			arr[i][9] = arr[i - 1][8];
		}

		// output
		int N = Integer.parseInt(br.readLine());
		long sum = 0;
		for(int i = 0; i<10; i++)
			sum = (sum + arr[N][i]) % MOD;
		bw.write(sum+"\n");
		
		bw.flush();
	}
	
}
