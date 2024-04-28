/* 17299 :_오등큰수 */
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int N;
int F[1000001] = { 0, };
int result[1000001] = { -1, };
int main() {
	cin >> N;

	vector<pair<int, int>> A;
	int n;
	for (int i = 0; i < N; i++) {
		cin >> n;
		A.push_back({ n, 0 });// first에는 값, second에는 등장횟수
		F[n]++;
	} // A에 값 입력, F에 등장횟수 입력

	for (int i = 0; i < N; i++) {
		A[i].second = F[A[i].first];
	}// A.second 에는 등장횟수

	stack<int> stk;
	for (int odks = 0; odks < N; odks++) {
		while (!stk.empty() && A[odks].second > A[stk.top()].second){
			// 스택에 원소가 있고, odks의 등장횟수가 top의 등장횟수보다 많을 때 while 실행
			result[stk.top()] = A[odks].first;
			stk.pop();
		}
		stk.push(odks);
	}

	for (int i = 0; i < N; i++) {
		if (result[i] == 0) result[i] = -1;
		cout << result[i] << ' ';
	}

	return 0;
}