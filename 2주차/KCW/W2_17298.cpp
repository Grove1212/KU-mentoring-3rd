/*17298 : ��ū��*/
/*����
* ��ū�� �������� ����, ���ͳ� ���� �� �ڵ� �ۼ��� ���� �߽��ϴ�
*/

/*�ǵ�� �ʿ��� �κ�
* �ð��ʰ��� ����. ����for������ Ǯ�� �ð� �ʰ��� ���
* �ð��ʰ��� �� ���̶�� ����� ��� �� �� ������? ->sudo�ڵ� �ۼ�
* vector ����ߴ��� outofrange ��� ����.
* �� �׷��� �� �� ��� �׳� int�� �迭�� ����ߴ�.
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
	for (int oks = 0; oks < N; oks++) {//oks�� ��ū���� idx
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