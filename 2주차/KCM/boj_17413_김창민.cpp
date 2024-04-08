// 단어 뒤집기 2 17413
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int f = 0, b;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			b = i - 1;
			for (int j = b; j >= f; j--)
				cout << s[j];
			cout << ' ';
			f = i + 1;
		}
		else if (s[i] == '<') {
			b = i - 1;
			for (int j = b; j >= f; j--)
				cout << s[j];
			
			while (s[i] != '>')
				cout << s[i++];
			cout << s[i];
			f = i + 1;
		}
		else if (i == s.length() - 1) {
			b = i;
			for (int j = b; j >= f; j--)
				cout << s[j];
		}
	}
}