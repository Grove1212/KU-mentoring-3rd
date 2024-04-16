// Á¶ÇÕ 0ÀÇ °³¼ö
#include <iostream>
using namespace std;

int two = 0, five = 0;

int count_Two(long long int n) {
	int cnt = 0;
	long long int mul = 2;

	while (n >= mul) {
		cnt += n / mul;
		mul *= 2;
	}

	return cnt;
}

int count_Five(long long int n) {
	int cnt = 0;
	long long int mul = 5;

	while (n >= mul) {
		cnt += n / mul;
		mul *= 5;
	}

	return cnt;
}

void count_Zero(int n, bool pm) {		// pmÀº trueÀÏ ¶§ µ¡¼À falseÀÏ ¶§ »¬¼À ¼öÇà
	int t = count_Two(n);
	int f = count_Five(n);

	if (pm) {
		two += t;
		five += f;
	}
	else {
		two -= t;
		five -= f;
	}
}

void print_Zero() {
	if (two > five) {
		cout << five;
	}
	else {
		cout << two;
	}
}

int main() {
	int n, r;
	int	zero = 0;

	cin >> n >> r;

	count_Zero(n, true);
	count_Zero(r, false);
	count_Zero(n - r, false);

	print_Zero();
}