/* 17299 :_����ū�� */
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
		A.push_back({ n, 0 });// first���� ��, second���� ����Ƚ��
		F[n]++;
	} // A�� �� �Է�, F�� ����Ƚ�� �Է�

	for (int i = 0; i < N; i++) {
		A[i].second = F[A[i].first];
	}// A.second ���� ����Ƚ��

	stack<int> stk;
	for (int odks = 0; odks < N; odks++) {
		while (!stk.empty() && A[odks].second > A[stk.top()].second){
			// ���ÿ� ���Ұ� �ְ�, odks�� ����Ƚ���� top�� ����Ƚ������ ���� �� while ����
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