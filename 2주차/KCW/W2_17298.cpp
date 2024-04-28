/*17298 : 오큰수*/
/*설명
* 오큰수 기준으로 생각, 인터넷 참고 후 코드 작성은 직접 했습니다
*/

/*피드백 필요한 부분
* 시간초과가 떴다. 이중for문으로 풀면 시간 초과가 뜬다
* 시간초과가 뜰 것이라는 사실을 어떻게 알 수 있을까? ->sudo코드 작성
* vector 사용했더니 outofrange 라고 떴다.
* 왜 그런지 알 수 없어서 그냥 int형 배열을 사용했다.
*/
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int N;
int result[1000001] = { -1, };

int main() {
	cin >> N;

	vector<int> input;
	int n;
	for (int i = 0; i < N; i++) {
		cin >> n;
		input.push_back(n);
	}

	stack<int>stk;
	for (int oks = 0; oks < N; oks++) {//oks는 오큰수의 idx
		while (!stk.empty() && input[stk.top()] < input[oks]) {
			result[stk.top()] = input[oks];
			stk.pop();
		}
		stk.push(oks);
	}


	for (int i = 0; i < N; i++) {
		if (result[i] == 0) result[i] = -1;
		cout << result[i] << ' ';
	}

	return 0;
}