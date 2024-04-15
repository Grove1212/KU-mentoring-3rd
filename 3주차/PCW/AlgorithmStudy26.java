//BOJ_3052 나머지
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashSet;

public class AlgorithmStudy26 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        HashSet<Integer> h = new HashSet<Integer>();
        //HashSet은 중복된 원소를 넣을 경우 하나만 저장한다.

        for(int i = 0; i < 10; i++){
            h.add(Integer.parseInt(br.readLine()) % 42);
        }
        System.out.println(h.size());

    }
}
