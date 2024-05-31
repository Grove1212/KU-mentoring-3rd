import java.io.*;
//BOJ 11057 [오르막수]
public class boj_11057 {
    private static final int MOD = 10_007;

    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int len = Integer.parseInt(br.readLine());
        int[][] arr = new int[1001][10];

        for (int i = 0; i <= 9; i++)
            arr[1][i] = 1;

        for (int k = 2; k <= len; k++) {
            for (int i = 0; i <= 9; i++) {
                for (int j = 0; j <= i; j++) {
                    arr[k][i] += arr[k - 1][j];
                    arr[k][i] %= MOD;
                }
            }
        }

        int result = 0;
        for (int i = 0; i <= 9; i++) {
            result += arr[len][i];
            result %= MOD;
        }
        System.out.println(result);
        br.close();
    }
}