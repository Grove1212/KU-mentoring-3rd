ㅠ// BOJ_1406 에디터
// 문제가 이해되지 않아 블로그를 참고하였습니다.


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class AlgorithmStudy18 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String input = br.readLine(); // 초기 문자열 입력
        int M = Integer.parseInt(br.readLine()); // 명령어 개수

        StringBuilder sb = new StringBuilder(input); // 문자열 처리용 StringBuilder
        Stack<Character> leftStack = new Stack<>(); // 왼쪽 문자열을 저장할 스택
        Stack<Character> rightStack = new Stack<>(); // 오른쪽 문자열을 저장할 스택

        // 초기에 커서를 문장의 맨 뒤에 위치시킴
        for (int i = 0; i < input.length(); i++) {
            rightStack.push(input.charAt(i));
        }

        for (int i = 0; i < M; i++) {
            String command = br.readLine();
            char action = command.charAt(0);

            switch (action) {
                case 'L': // 커서를 왼쪽으로 이동
                    if (!leftStack.isEmpty()) {
                        rightStack.push(leftStack.pop());
                    }
                    break;
                case 'D': // 커서를 오른쪽으로 이동
                    if (!rightStack.isEmpty()) {
                        leftStack.push(rightStack.pop());
                    }
                    break;
                case 'B': // 왼쪽 문자 삭제
                    if (!leftStack.isEmpty()) {
                        leftStack.pop();
                    }
                    break;
                case 'P': // 문자 추가
                    char character = command.charAt(2);
                    leftStack.push(character);
                    break;
            }
        }

        // 스택에서 문자열을 pop하여 문자열 뒤집기
        while (!leftStack.isEmpty()) {
            rightStack.push(leftStack.pop());
        }

        // 스택에 저장된 문자열을 StringBuilder에 저장하여 출력 문자열 생성
        while (!rightStack.isEmpty()) {
            sb.append(rightStack.pop());
        }

        System.out.println(sb.toString());
    }
}
