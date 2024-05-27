#include <iostream>
using namespace std;

int main() {
	int n, x;
	int sum = 0;
	int max = -1000;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;

		sum += x;

		if (x > sum)
			sum = x;

		if (sum > max)
			max = sum;
	}

	cout << max;
}