/* 10799 : 쇠막대기*/
/*
제 코드는 시간이 거의 500ms가 걸려서 다른 코드를 공부하였습니다
김채원 풀이 : 쇠파이프 기준 풀이
정석 풀이 : 레이저 기준 풀이
레이저 기준
레이저 앞의 여는 괄호 개수 -> 레이저가 자르는 파이프 개수
파이프의 괄호가 닫힐 때 : 1을 추가해줌(레이저는 한번 자르면 두개가 나오기 때문)
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout.tie(0);
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int count = 0;
    int sum = 0;

    string pipe;
    cin >> pipe;

    int len = pipe.length();
    for (int i = 0; i < len; i++) {
        if (pipe[i] == '(') count++;
        else {
            count--;
            if (pipe[i - 1] == '(') sum += count;
            else sum++;
        }
    }
    cout << sum << "\n";
    return 0;
}