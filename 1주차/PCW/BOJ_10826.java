//BOJ_10826 스택
import java.util.*;

public class AlgorithmStudy15 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        Stack<Integer> stack = new Stack<>();

        for (int i = 0; i < N; i++) {
            String flag = scanner.next();
            switch (flag) {
                case "push":
                    int X = scanner.nextInt();
                    stack.push(X);
                    break;
                case "pop":
                    if (stack.isEmpty())
                        System.out.println(-1);
                    else
                        System.out.println(stack.pop());
                    break;
                case "size":
                    System.out.println(stack.size());
                    break;
                case "empty":
                    if (stack.isEmpty())
                        System.out.println(1);
                    else
                        System.out.println(0);
                    break;
                case "top":
                    if (stack.isEmpty())
                        System.out.println(-1);
                    else
                        System.out.println(stack.peek());
                    break;
            }
        }
        scanner.close();
    }
}
