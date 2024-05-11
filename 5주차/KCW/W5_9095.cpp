/* 9095 : 123 ¥ı«œ±‚ */
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int T, n;
	cin >> T;
	vector<int> dp;
	dp.push_back(1);
	dp.push_back(2);
	dp.push_back(4);

	for (int i = 3; i < 11; i++) {
		dp.push_back(dp[i - 1] + dp[i - 2] + dp[i - 3]);
	}

	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << dp[n - 1] << '\n';
	}
}