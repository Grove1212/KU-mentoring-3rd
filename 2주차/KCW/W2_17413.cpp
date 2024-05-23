/* 17413 : 단어뒤집기*/
/* 설명
queue에 모든 단어를 집어넣는다.
<를 만나지 않으면 stack에 넣고, <를 만나면 queue에 넣는다.
' '을 만나면 stack에 넣었던 것을 queue에 넣어 거꾸로 만들어준다(stackInput).
마지막으로 queue를 프린트한다.
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

void stackInput() {//sorting을 위해 집어넣음
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