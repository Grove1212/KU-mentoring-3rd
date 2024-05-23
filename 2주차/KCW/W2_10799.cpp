/* 10799 : 쇠막대기*/
#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

string str;
queue<pair<int, int>> steelStick; //쇠막대기 여, 닫 별로 저장
vector<pair<int, int>> ssk;
vector<int> laser; // 레이저, 닫는괄호 인덱스 저장
int result = 0;

void input() {
	cin >> str;
}

void sorting() { // 쇠막대기, 레이저 별로 나누기
	stack<int> stk;
	bool flag = 0; // 바로 직전에 여는 괄호였는가?
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			stk.push(i);
			flag = 1;
		}
		else if (str[i] == ')') {
			if (flag == 1) {//레이저
				laser.push_back(i);
			}
			else {//쇠막대기
				steelStick.push({ stk.top(),i });
				ssk.push_back({ stk.top(),i });
			}
			stk.pop();
			flag = 0;
		}
	}
	
	/*검증용 코드
	cout << "레이저는 : ";
	for (int i = 0; i < laser.size(); i++) {
		cout << laser[i] << ' ';
	}
	cout << '\n';

	cout << "쇠막대기는 : ";
	for (int i = 0; i < steelStick.size(); i++) {
		cout << ssk[i].first << ", " << ssk[i].second << '\n';
	}	
	*/
}

void count() {
	while (!steelStick.empty()) {
		int cnt = 1;
		int start = steelStick.front().first;
		int end = steelStick.front().second;
		for (int i = 0; i < laser.size(); i++) {
			if (laser[i] > start && laser[i] < end) cnt++;
		}
		steelStick.pop();
		result += cnt;
	}
}

void print() {
	cout << result;
}

int main() {
	input();
	sorting();
	count();
	print();

	return 0;
}