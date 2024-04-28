/* 2609 : �ִ������� �ּҰ����*/
// ���� : ��Ŭ���� ȣ�������� Ǯ��
#include <iostream>
using namespace std;

int BCD(int a, int b) {
	int tmp;

	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}

	while (b) {
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int LCM(int a, int b) {
	int bcd = BCD(a, b);
	a = a / bcd;
	b = b / bcd;
	return a * b * bcd;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b;
	cin >> a >> b;

	cout << BCD(a, b) << '\n';
	cout << LCM(a, b) << '\n';

	return 0;
}