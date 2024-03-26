#include <iostream>
#include <string>
#include <vector>
using namespace std;

int N, v_size;
vector<int> v;
void push_front(int x) {
	if (v_size == -1) {
		v.push_back(x);
		v_size++;
		return;
	}
	v.push_back(v.back());
	v_size++;
	for (int i = v_size; i > 0; i--) {
		v[i] = v[i - 1];
	}
	v[0] = x;
}
void push_back(int x) {
	v_size++;
	v.push_back(x);
}
void front();
void pop_front() {
	if (v_size == -1) {
		cout << v_size << '\n';
		return;
	}
	front();
	for (int i = 0; i < v_size; i++) {
		v[i] = v[i + 1];
	}
	v.pop_back();
	v_size--;
}
void pop_back() {
	if (v_size == -1) {
		cout << v_size << '\n';
		return;
	}
	cout << v[v_size] << '\n';
	v.pop_back();
	v_size--;
}
void size() { cout << v_size + 1 << "\n"; }
void empty() { (v_size + 1) ? cout << 0 << "\n" : cout << 1 << "\n"; }
void front() {
	if (v_size == -1) {
		cout << v_size << '\n';
		return;
	}
	cout << v[0] << '\n';
}
void back() {
	if (v_size == -1) {
		cout << v_size << '\n';
		return;
	}
	cout << v[v_size] << '\n';
}

void input() {
	cin >> N;
	//명령어 입력 받고 동시에 함수 실행
	for (int i = 0; i < N; i++) {
		string command;
		cin >> command;

		if (command == "push_front") {
			int i; cin >> i;
			push_front(i);
		}
		else if (command == "push_back") {
			int i; cin >> i;
			push_back(i);
		}
		else if (command == "pop_front") pop_front();
		else if (command == "pop_back") pop_back();
		else if (command == "size") size();
		else if (command == "empty") empty();
		else if (command == "front") front();
		else if (command == "back") back();
	}


}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	v_size = -1;
	input();

	return 0;
}