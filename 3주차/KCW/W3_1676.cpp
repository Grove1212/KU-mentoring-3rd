/* 1676 : ���丮�� 0�� ���� */
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