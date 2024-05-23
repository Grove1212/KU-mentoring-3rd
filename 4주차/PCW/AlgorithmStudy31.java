// BOJ_9613_GCD 합
import java.math.BigInteger;
import java.util.*;
import java.io.*;
 
 
 
 
public class AlgorithmStudy31 {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        for (int tc = 0; tc < t; tc++) {
            String [] str = br.readLine().split(" ");
            int n = Integer.parseInt(str[0]);
            int []arr = new int[n];
            for(int i=0;i<n;i++) {
                arr[i] = Integer.parseInt(str[i+1]);
            }
            long sum=0;
            for(int i=0;i<n;i++) {
                for(int j=i;j<n;j++) {
                    if(i!=j) {
                        sum+=gcd(arr[i],arr[j]);
                    }
                }
            }
            System.out.println(sum);
        }
    }
    public static int gcd(int a, int b) {
        if(b==0) return a;
        return gcd(b,a%b);
    }
}