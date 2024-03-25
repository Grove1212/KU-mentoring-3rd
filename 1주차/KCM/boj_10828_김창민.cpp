#include <iostream>
#include <vector>
using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> stack;
	int n, x;
	string cmd;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;

		if (cmd == "push") {
			cin >> x;
			stack.push_back(x);
		}
		else if (cmd == "pop") {
			if (stack.empty()) {
				cout << "-1\n";
			}
			else {
				cout << stack.back() << "\n";
				stack.pop_back();
			}
		}
		else if (cmd == "size") {
			cout << stack.size() << "\n";
		}
		else if (cmd == "empty") {
			cout << stack.empty() << "\n";
		}
		else if (cmd == "top") {
			if (stack.empty()) {
				cout << "-1\n";
			}
			else {
				cout << stack.back() << "\n";
			}
		}
	}
}