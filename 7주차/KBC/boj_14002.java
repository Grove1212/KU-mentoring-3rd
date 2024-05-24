import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;

//BOJ 14002 [가장 긴 증가하는 부분 수열 4]
public class boj_14002 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        int N = Integer.parseInt(br.readLine());
        int[] sequence = new int[N + 1];
        int[] dp = new int[N + 1];

        //수열 초기화
        String[] input = br.readLine().split(" ");
        for (int i = 1; i <= input.length; i++) {
            sequence[i] = Integer.parseInt(input[i - 1]);
        }

        //각 단계에서의 가장 긴 수열의 길이 구하기
        for (int i = 1; i <= N; i++) {
            dp[i] = 1;
            for (int j = i - 1; j >= 0; j--) {
                if (sequence[i] > sequence[j]) {
                    dp[i] = Math.max(dp[i], dp[j] + 1);
                }
            }
        }

        int index = 0;
        int length;
        int[] result = new int[N + 1];

        //가장 긴 수열의 마지막 요소 index
        for (int i = 1; i <= N; i++) {
            if (dp[index] < dp[i]) {
                index = i;
            }
        }

        //가장 마지막 요소 배열에 저장
        length = dp[index];
        result[length] = sequence[index];
        //뒤에서 부터 탐색 및 저장
        for (int i = index; i > 0; i--) {
            if (dp[i] == length - 1 && sequence[i] < sequence[index]) {
                length = dp[i];
                result[length] = sequence[i];
            }
        }

        System.out.println(dp[index]);
        for (int i = 1; i <= dp[index]; i++) {
            sb.append(result[i]).append(" ");
        }
        System.out.println(sb);
    }
}