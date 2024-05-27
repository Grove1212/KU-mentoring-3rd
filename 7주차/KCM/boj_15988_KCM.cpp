// 15988 1, 2, 3 ¥ı«œ±‚ 3

#include <iostream>
#include <vector>
using namespace std;

vector<int> dp;
const int Divisor = 1000000009;

int Plus(int n) {
	if (n < dp.size())
		return dp[n];

	for (int i = dp.size(); i <= n; i++)
		dp.push_back(((dp[i - 1] + dp[i - 2]) % Divisor + dp[i - 3]) % Divisor);
	
	return dp[n];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	dp.push_back(0);
	dp.push_back(1);
	dp.push_back(2);
	dp.push_back(4);

	int t, n;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << Plus(n) << "\n";
	}
}