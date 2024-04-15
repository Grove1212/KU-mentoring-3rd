// BOJ_10872 팩토리얼
import java.util.Scanner;
public class AlgorithmStudy28 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();

        sc.close();

        int sum = 1;

        while(N != 0){
            sum = sum * N;
            N--;
        }

        System.out.println(sum);
    }
}
