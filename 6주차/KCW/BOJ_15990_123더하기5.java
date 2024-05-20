package w6;

import java.io.*;

public class BOJ_15990_123더하기5 {
	
	static final int MOD = 1000000009;
	static long arr[][] = new long[100001][4];

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		// DP
		// 초깃값 설정
		arr[1][1] = 1;
		arr[2][2] = 1;
		arr[3][3] = 1;
		arr[3][1] = 1;
		arr[3][2] = 1;

		for (int i = 4; i <= 100000; i++) {
			arr[i][1] = (arr[i - 1][2] + arr[i - 1][3]) % MOD;
			arr[i][2] = (arr[i - 2][1] + arr[i - 2][3]) % MOD;
			arr[i][3] = (arr[i - 3][1] + arr[i - 3][2]) % MOD;
		}

		// output
		int T = Integer.parseInt(br.readLine());
		int n;
		for (int i = 0; i < T; i++) {
			n = Integer.parseInt(br.readLine());
			arr[n][0] = (arr[n][1] + arr[n][2] + arr[n][3]) % 1000000009;
			bw.write(arr[n][0]+"\n");
		}

		bw.flush();
	}
}
