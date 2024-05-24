#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int sqnMin(int n) {
	vector<int> dp(1, 0);
	int min, sq;

	for (int i = 1; i <= n; i++) {
		min = dp[i - 1] + 1;
		
		for (int j = 2; j * j <= i; j++) {
			sq = j * j;
			if (min > dp[i - sq] + 1)
				min = dp[i - sq] + 1;
		}

		dp.push_back(min);
	}

	return dp[n];
}

int main() {
	int n;
	cin >> n;

	cout << sqnMin(n);
}