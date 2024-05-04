// 9613 GCD гу

#include <iostream>
#include <vector>
using namespace std;

int GCD(int x, int y) {
	int tmp;

	if (x < y) {
		tmp = x; 
		x = y; 
		y = tmp;
	}

	while (y != 0) {
		tmp = x % y;
		x = y;
		y = tmp;
	}

	return x;
}

long long int GCDSum(int n) {
	vector<int> v;
	int x;
	long long int sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			sum += GCD(v[i], v[j]);
		}
	}

	return sum;
}

int main() {
	int t, n;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << GCDSum(n) << "\n";
	}
}