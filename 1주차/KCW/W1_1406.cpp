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