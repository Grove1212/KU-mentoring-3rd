// 2225 합분해

#include <iostream>
#include <vector>
using namespace std;

int sumDcmp(int n, int k) {
	const int Divisor = 1000000000;

	vector<vector<int>> dp;
	vector<int> v(k + 1, 1);
	
	v[0] = 0;
	dp.push_back(v);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			v[j] = (v[j - 1] + dp[i - 1][j]) % Divisor;
		}
		dp.push_back(v);
	}

	return dp[n][k];
}

int main() {
	int n, k;

	cin >> n >> k;
	cout << sumDcmp(n, k);
}