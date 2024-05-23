/* 17413 : �ܾ������*/
/* ����
queue�� ��� �ܾ ����ִ´�.
<�� ������ ������ stack�� �ְ�, <�� ������ queue�� �ִ´�.
' '�� ������ stack�� �־��� ���� queue�� �־� �Ųٷ� ������ش�(stackInput).
���������� queue�� ����Ʈ�Ѵ�.
*/
#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

string str;
stack<char> stk;
queue<char> result;

void input() {
	getline(cin, str);
}

void stackInput() {//sorting�� ���� �������
	while (!stk.empty()) {
		result.push(stk.top());
		stk.pop();
	}
}

void sorting() {
	for (int i = 0; i < str.size(); i++) {
		if(str[i] == '<'){
			stackInput();
			while (1) {
				result.push(str[i]);
				if (str[i] == '>') break;
				i++;
			}
		}
		else if (str[i] == ' ') {
			stackInput();
			result.push(str[i]);
		}
		else{
			stk.push(str[i]);
		}
	}
	stackInput();
}



void print() {
	while (!result.empty()) {
		cout << result.front();
		result.pop();
	}
}
int main(void) {
	input();
	sorting();
	print();

	return 0;
}