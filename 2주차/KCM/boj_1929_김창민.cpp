// 소수 구하기 1929
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> prime;
	int m, n;

	cin >> m >> n;

	vector<bool> num(n + 1, true);
	num[0] = false;
	num[1] = false;

	for (int i = 2; i <= n; i++) {
		if (num[i]) {
			prime.push_back(i);
			for (int j = i * 2; j < n + 1; j += i)
				num[j] = false;

			if (i >= m)
				cout << i << "\n";
		}
	}
}