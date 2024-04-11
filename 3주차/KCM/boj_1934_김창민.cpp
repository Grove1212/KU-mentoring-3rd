#include <iostream>
using namespace std;

int main() {
	int T, A, B;
	int n;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> A >> B;

		n = A;

		while (n % B != 0)
			n += A;

		cout << n << "\n";
	}
}