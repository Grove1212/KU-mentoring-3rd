#include <iostream>
#include <string>
#include <deque>

using namespace std;

deque<char> d;
int cursor;
int M;

void left() {
	if (cursor != 0) {
		cursor--;
	}
}
void right() {
	if (cursor != d.size()) {
		cursor++;
	}
}
void left_delete() {
	if (cursor == 0) return;
	for (int i = cursor; i < d.size(); i++) {
		d[i - 1] = d[i];
	}
	d.pop_back();
	cursor--;
}
void put(char ch) {
	d.push_back(d.back());
	for (int i = d.size()-1; i > cursor; i--) {
		d[i] = d[i-1];
	}
	d[cursor] = ch;
	cursor++;
}

void input() {
	string str;
	cin >> str;
	cin >> M;

	//string으로 받은 것을 덱에 입력
	for (int i = 0; i < str.length(); i++) {
		d.push_back(str[i]);
	}
	cursor = d.size();

	//명령어 입력 받고 동시에 함수 실행
	for (int i = 0; i < M; i++) {
		char command;
		cin >> command;

		switch (command) {
			case 'L':
				left();
				break;
			case 'D':
				right();
				break;
			case 'B':
				left_delete();
				break;
			case 'P':
				char ch;
				cin >> ch;
				put(ch);
				break;
			default:
				break;
		}
	}
}

void print() {
	for (int i = 0; i < d.size(); i++) {
		cout << d[i];
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	input();
	print();

	return 0;
}




//함수를 활용하여 코드를 작성하여서 코드의 역할이 잘 배분되어보입니다. 또 if문이 아닌 switch를 사용하여 코드의 효율성이 올라가 보입니다(저는 if문으로 했는데 수정해야겠습니다
// for (int i = d.size()-1; i > cursor; i--) {
		d[i] = d[i-1];
	}
// 1406이 시간제한때문에 까다로웠는데 switch와 ios::sync_with_stdio(false);을 사용해서 시간을 잘 줄인것 같습니다
// 커서가 맨 앞에 위치한경우 L과 B가 입력되었을때 예외처리가 잘 되어 보입니다(저는 이 예외처리를 잡아내는데 시간을 많이 할애했습니다..)
