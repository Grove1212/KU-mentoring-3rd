/* 1676 : 팩토리얼 0의 개수 */
#include <iostream>
using namespace std;

int N;

int main(void) {
	cin >> N;
	int cnt = 0;
	for (int i = 5; i <= N; i *= 5)
	{
		cnt += (N / i);
	}
	cout << cnt;

	return 0;
}