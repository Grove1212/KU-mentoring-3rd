// 11727 2 x n ≈∏¿œ∏µ 2

#include <iostream>
#include <vector>
using namespace std;

vector<int> dp;

int tiling(int n) {
	dp.push_back(1);
	dp.push_back(1);

	for (int i = 2; i < n + 1; i++)
		dp.push_back((dp[i - 1] + dp[i - 2] * 2) % 10007);

	return dp[n];
}

int main() {
	int n;

	cin >> n;
	cout << tiling(n);
}