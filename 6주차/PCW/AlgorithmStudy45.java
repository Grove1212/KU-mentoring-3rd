// BOJ_10844 쉬운 계단 수
import java.util.Scanner;

public class AlgorithmStudy45 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long[][] dp = new long[n][10];
        for(int i = 1; i < 10; i++){
            dp[0][i] = 1;
        }

        for(int i = 1; i < n; i++){
            dp[i][0] = dp[i-1][1];
            dp[i][9] = dp[i-1][8];
            for(int j = 1; j < 9; j++){
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % 1000000000;
            }
        }

        long sum = 0;
        for(int i = 0; i < 10; i++){
            sum += dp[n-1][i];
        }
        System.out.println(sum % 1000000000);
    }
}