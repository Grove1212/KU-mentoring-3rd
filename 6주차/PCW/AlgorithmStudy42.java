// BOJ_2193 이친수

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class AlgorithmStudy42 {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        long [] d = new long[N+1]; // 0부터 N까지라서 N+1임

        d[0] = 0; 
        d[1] = 1;



        for( int i =2; i<=N; i++){
            d[i] = d[i-1]+ d[i-2];
        }

        System.out.println(d[N]);

    }
}