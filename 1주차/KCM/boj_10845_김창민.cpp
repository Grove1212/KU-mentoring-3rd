#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int queue[10000];
	int front = 0, back = 0;
	string cmd;
	int n, x;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;

		if (cmd == "push") {
			cin >> x;
			queue[back] = x;
			back++;
		}
		else if (cmd == "pop") {
			if (front == back) {
				cout << "-1\n";
			}
			else {
				cout << queue[front] << "\n";
				front++;
			}
		}
		else if (cmd == "size") {
			cout << back - front << "\n";
		}
		else if (cmd == "empty") {
			cout <<	(front == back) << "\n";
		}
		else if (cmd == "front") {
			if (front == back) {
				cout << "-1\n";
			}
			else {
				cout << queue[front] << "\n";
			}
		}
		else if (cmd == "back") {
			if (front == back) {
				cout << "-1\n";
			}
			else {
				cout << queue[back - 1] << "\n";
			}
		}
	}
}