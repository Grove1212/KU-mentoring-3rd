/* 1978 : �Ҽ� ã�� */
#include <iostream>
using namespace std;

int N, arr[1001];
int isPrime, prmCnt = 0;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	//1. 0 ~ n���� �Ҽ��� ���Ѵ�.
	for (int i = 2; i <= 1000; i++) arr[i] = i;

	for (int i = 2; i * i <= 1000; i++) {
		if (arr[i] == 0) continue; // �Ҽ�x

		for (int j = i * i; j <= 1000; j += i) {
			arr[j] = 0;
		}
	}

	for (int prm = 0; prm < N; prm++) {
		cin >> isPrime;
		if (arr[isPrime] != 0) prmCnt++;
	}
	cout << prmCnt;

	return 0;
}