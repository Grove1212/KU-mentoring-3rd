// BOJ_9465 스티커
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class AlgorithmStudy55 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int tc = Integer.parseInt(br.readLine()); // 테스트 케이스 수

        for (int i = 0; i < tc; i++) {
            int n = Integer.parseInt(br.readLine()); // 스티커의 열 수


            int[][] stickers = new int[2][n+1]; // 스티커 값을 저장할 배열
            int[][] dp = new int[2][n+1];       // 최대 점수를 저장할 DP 테이블



            // 스티커 값 읽기 반복문 각 행 - (0과 1)에 대해 스티커 값을 읽어 stickers[j][k]에 저장
            for(int j=0; j<2; j++){
                String[] inputs = br.readLine().split(" ");
                for (int k = 1; k <= n; k++) {
                    stickers[j][k] = Integer.parseInt(inputs[k-1]);
                }
            }
            // 첫번째 column은 자기 자신이 최대이므로 자기 자신으로 초기화
            dp[0][1] = stickers[0][1];
            dp[1][1] = stickers[1][1];

            for (int j = 2; j <= n; j++) {
                dp[0][j] = Math.max(dp[1][j - 1], dp[1][j - 2]) + stickers[0][j];
                dp[1][j] = Math.max(dp[0][j - 1], dp[0][j - 2]) + stickers[1][j];
            }

            System.out.println(Math.max(dp[0][n], dp[1][n]));
        }
    }
}
/*
        1   2   3   4   5
        O   X   O   X   O
        X   O   X   O   O


        O   X   O   X   O
        X   O   X   O   O

        1   2   3   4   5
        X   X   O   X   O
        O   X   X   O   O
 */