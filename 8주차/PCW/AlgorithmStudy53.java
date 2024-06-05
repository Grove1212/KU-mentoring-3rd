// BOJ_1309 동물원
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class AlgorithmStudy53 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        int[][] dp = new int[n+1][3];

        // 초기 조건 설정
        dp[1][0] = 1; // 사자가 없는 경우
        dp[1][1] = 1; // 왼쪽 칸에 사자가 있는 경우
        dp[1][2] = 1; // 오른쪽 칸에 사자가 있는 경우

        for (int i = 2; i <= n; i++){
            dp[i][0] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][2]) % 9901; // 현재 칸에 사자가 없는 경우
            dp[i][1] = (dp[i-1][0] + dp[i-1][2]) % 9901; // 왼쪽 칸에 사자가 있는 경우
            dp[i][2] = (dp[i-1][0] + dp[i-1][1]) % 9901; // 오른쪽 칸에 사자가 있는 경우
        }

        int answer = (dp[n][0] + dp[n][1] + dp[n][2]) % 9901;
        System.out.println(answer);
    }
}
