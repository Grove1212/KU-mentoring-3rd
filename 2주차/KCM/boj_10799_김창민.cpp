// ¼è¸·´ë±â 10799
#include <iostream>
using namespace std;

int main() {
	string s;
	int sum = 0;
	int stick = 0;
	
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(' && s[i + 1] == ')') {
			sum += stick;
			i++;
		}
		else if (s[i] == '(') {
			stick++;
			sum++;
		}
		else if (s[i] == ')') {
			stick--;
		}
	}

	cout << sum;
}