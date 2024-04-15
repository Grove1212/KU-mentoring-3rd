//BOJ_10799 쇠막대기
import java.io.*;
import java.util.*;

public class AlgorithmStudy20{
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        Stack<Character> stack = new Stack<>();
        int answer = 0;
        String str = br.readLine();

        for(int i =0; i < str.length();i++){

            if (str.charAt(i) == '('){
                stack.push('(');
            } else if (str.charAt(i) == ')'){
                stack.pop();

                if(str.charAt(i-1) == '('){
                    answer += stack.size();
                } else if(str.charAt(i -1) ==')'){
                    answer++;
                }
            }
        }
        System.out.println(answer);
    }
}