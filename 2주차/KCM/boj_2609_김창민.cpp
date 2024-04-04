// 최대공약수와 최소공배수 2609
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	int GCD, LCM;
	int r, s;
	int tmp;

	cin >> a >> b;

	if (a > b) {
		r = a;
		s = b;
	}
	else {
		r = b;
		s = a;
	}

	while (r % s != 0) {
		tmp = r % s;
		r = s;
		s = tmp;
	}
	GCD = s;

	tmp = a;
	while (tmp % b != 0)
		tmp += a;
	LCM = tmp;

	cout << GCD << "\n" << LCM;
}