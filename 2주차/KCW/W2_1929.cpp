/* 1929 : �Ҽ� ���ϱ� */
#include <iostream>
#include <vector>
using namespace std;

int arr[1000001] = { 0, };

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int M, N;
	cin >> M >> N;
	
	for (int i = 2; i <= N; i++) arr[i] = i;
	
	for (int i = 2; i*i <= N; i++) {
		if (arr[i] == 0) continue; // �Ҽ�x

		for (int j = i * i; j <= N; j+= i) {
			arr[j] = 0;
		}
	}

	for (int i = M; i <= N; i++)
		if (arr[i]!=0) cout << arr[i] << '\n';

	return 0;
}

/*
��� 1�� n^n
1. ������ �������� ���� ���� �� break;
2. ����������� �� = �ش� �� �̸� �Ҽ�.
*/

/*
��� 2�� n*��Ʈn
1. n = p * q (p, q <= ��Ʈn)
2. ��Ʈ n������ Ž��
*/

/*
��� 3�� �����佺�׳׽��� ü nlogn
+ 2�� ������� ����
*/