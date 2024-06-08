import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

// BOJ 14002_ 가장 긴 증가하는 부분 수열 4
public class AlgorithmStudy47 {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int [] arr = new int[n+1];
        int [] dp = new int[n+1];
        dp[1] = 1;

        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int i=1; i<=n; i++){
            arr[i] = Integer.parseInt(st.nextToken());
        }

        int answer = dp[0];
        for(int i=1; i<n; i++){
            int max = 0;
            for(int j=i-1; j>=0; j--){}
        }
    }
}