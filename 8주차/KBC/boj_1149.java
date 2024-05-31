import java.io.*;
import java.util.stream.Stream;

//BOJ 1149 RGB거리
public class boj_1149 {
    private static final int R = 0;
    private static final int G = 1;
    private static final int B = 2;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int dp[][] = new int[n][3];
        Integer[][] costs = new Integer[n][3];


        for (int i = 0; i < n; i++) {
            String[] input = br.readLine().split(" ");
            costs[i] = Stream.of(input).map(cost -> Integer.parseInt(cost)).toArray(size -> new Integer[size]);
        }

        dp[0][R] = costs[0][R];
        dp[0][G] = costs[0][G];
        dp[0][B] = costs[0][B];
        for (int i = 1; i < n; i++) {
            dp[i][R] = Math.min(dp[i - 1][G], dp[i - 1][B]) + costs[i][R];
            dp[i][G] = Math.min(dp[i - 1][R], dp[i - 1][B]) + costs[i][G];
            dp[i][B] = Math.min(dp[i - 1][R], dp[i - 1][G]) + costs[i][B];
        }

        int max = Math.min(dp[n - 1][R], Math.min(dp[n - 1][G], dp[n - 1][B]));
        System.out.println(max);
    }
}