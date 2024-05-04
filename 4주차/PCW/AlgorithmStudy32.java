// BOJ 17087 숨바꼭질6
import java.util.Scanner;

public class AlgorithmStudy32 {

    public static int gcd(int a, int b){
        if (b==0) return a;
        return gcd(b, a%b);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int s = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            int tmp = sc.nextInt();
            arr[i] = Math.abs(s - tmp);
        }

        int result = arr[0];
        for (int i = 1; i < n; i++) {
            result = gcd(result, arr[i]);
        }
        System.out.println(result);
    }
}