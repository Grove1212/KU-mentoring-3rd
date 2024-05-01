/* 1934 : 최소공배수 */
#include <iostream>
using namespace std;

int T, A, B, tmp;

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
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << LCM(A, B) << '\n';
	}
	
	return 0;
}