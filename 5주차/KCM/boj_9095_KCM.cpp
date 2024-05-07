// 9095 1, 2, 3 ¥ı«œ±‚

#include <iostream>
#include <vector>
using namespace std;

class Plus {
	vector<int> dp;
public:
	Plus() {
		dp.push_back(0);
		dp.push_back(1);
		dp.push_back(2);
		dp.push_back(4);
	}

	int nPlus(int);
};

int Plus::nPlus(int n) {
	if (n < dp.size())
		return dp[n];

	for (int i = dp.size(); i <= n; i++)
		dp.push_back(dp[i - 1] + dp[i - 2] + dp[i - 3]);

	return dp[n];
}

int main() {
	int n, T;
	Plus p;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << p.nPlus(n) << "\n";
	}
}