// 2193 이친수

#include <iostream>
#include <vector>
using namespace std;

long long int dp(int n) {
	if (n == 1)
		return 1;
	
	vector<vector<long long int>> v;
	vector<long long int> tmp(2, 0);

	v.push_back(tmp);
	tmp[1] = 1;
	v.push_back(tmp);

	for (int i = 2; i <= n; i++) {
		tmp[1] = v[i - 1][0];
		tmp[0] = v[i - 1][0] + v[i - 1][1];

		v.push_back(tmp);
	}

	return v[n][0] + v[n][1];
}

int main() {
	int n;
	
	cin >> n;

	cout << dp(n);
}