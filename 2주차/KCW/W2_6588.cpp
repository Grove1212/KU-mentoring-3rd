/* 6588 : �������� ���� */
#include <iostream>
#include <stack>
using namespace std;

int n, arr[1000001];
int prime[169], prmIdx = 0;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	//1. 0 ~ n���� �Ҽ��� ���Ѵ�.
	for (int i = 2; i <= 1000000; i++) arr[i] = i;

	for (int i = 2; i * i <= 1000000; i++) {
		if (arr[i] == 0) continue; // �Ҽ�x
		prime[prmIdx++] = i;
		for (int j = i * i; j <= 1000000; j += i) {
			arr[j] = 0;
		}
	}

	while (n) {
		//2. n - �Ҽ� �� �Ҽ����� �Ǻ��Ѵ�.
		int isWrong = 1;
		for (int i = 1; prime[i] <= n/2; i++)
			if (prime[i] != 0 && arr[n - prime[i]] != 0) {
				// ���� ���� i�� �ִ� ���� �ּ�
				cout << n << " = " << prime[i] << " + " << n - prime[i] << '\n';
				isWrong = 0;
				break;
			}

		if (isWrong) cout << "Goldbach's conjecture is wrong.\n";

		cin >> n;
	}
	return 0;
}