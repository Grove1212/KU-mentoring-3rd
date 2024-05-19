package w6;

import java.io.*;
import java.util.*;

public class BOJ_11053_가장긴증가하는부분수열 {
	static int arr[] = new int[1001];
	static int dp[] = new int[1001];

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		int n = Integer.parseInt(br.readLine());
		StringTokenizer st = new StringTokenizer(br.readLine());
		for (int i = 0; i < n; i++) {
			arr[i] = Integer.parseInt(st.nextToken());
			dp[i] = 1;
		}
		
		for (int i = 1; i <= n; i++) {
			for(int j = 0; j < i; j++) {
				if(arr[i] > arr[j])
					dp[i] = Math.max(dp[i], dp[j]+1);
			}
		}
		
		int maximum = 0;
		for(int i = 0; i < n; i++) {
			if(maximum < dp[i]) maximum = dp[i];
		}
		
		bw.write(maximum+"\n");
		bw.flush();
	}

}
