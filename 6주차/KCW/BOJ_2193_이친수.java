package w6;
import java.io.*;
public class BOJ_2193_이친수 {
	static long arr[][] = new long[91][2];
	
	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		// DP
		// 초깃값 설정
		arr[1][1] = 1;
		for(int i = 2; i<91; i++) {
			arr[i][0] = arr[i-1][0] + arr[i-1][1];
			arr[i][1] = arr[i-1][0];
		}
		
		//output
		int n = Integer.parseInt(br.readLine());
		long sum = arr[n][0] + arr[n][1];
		bw.write(sum+"\n");
		
		bw.flush();
	}

}
