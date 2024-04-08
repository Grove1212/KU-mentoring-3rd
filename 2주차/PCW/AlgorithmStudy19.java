// BOJ_17413 - 단어 뒤집기 2
import java.io.*;
import java.util.*;
public class AlgorithmStudy19 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String str = br.readLine();
        StringBuilder sb = new StringBuilder();

        boolean flag = false; // 열린 < 와 닫힌 > 를 구분하기 위한 flag

        Stack <Character> stack = new Stack <> ();

        for(int i =0; i < str.length(); i++){
            if(str.charAt(i)=='<'){
                while(!stack.isEmpty()){
                    sb.append(stack.pop()); // 스택이 비어있지 않다면 sb에 추가한다.
                }
                flag = true; // '<'을 발견하면 flag를 true로 설정.
            }

            else if(str.charAt(i)=='>'){
                flag = false; // '>' 를 발견하면 flag를 false로,
                sb.append(str.charAt(i)); // 그리고 해당 문자를 sb에 append 한다.
                continue;
            }

            if(flag == true){
                sb.append(str.charAt(i));
            }
            else if (flag == false){
                if(str.charAt(i) == ' '){
                    while (!stack.isEmpty()){
                        sb.append(stack.pop());
                    }
                    sb.append(' ');
                    continue;
                } else {
                    stack.push(str.charAt(i));
                }
            }

            if(i == str.length()-1){
                while (!stack.isEmpty()){
                    sb.append(stack.pop());
                }
            }
        }

        System.out.println(sb);

    }
}
