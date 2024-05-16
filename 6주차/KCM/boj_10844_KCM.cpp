// 10844 쉬운 계단 수

#include <iostream>
#include <vector>
using namespace std;

class Floor {
	vector<vector<int>> v;
	int rmd = 1000000000;
public:
	Floor() {
		vector<int> tmp(10, 0);
		v.push_back(tmp);

		tmp[0] = 0;
		for (int i = 1; i <= 9; i++)
			tmp[i] = 1;
		v.push_back(tmp);
	}
	int dp(int);
};

int Floor::dp(int n) {
	if (n == 1)
		return 9;

	vector<int> tmp(10, 0);
	for (int i = 2; i <= n; i++) {
		tmp[0] = v[i - 1][1];
		tmp[9] = v[i - 1][8];
		for (int j = 1; j < 9; j++)
			tmp[j] = (v[i - 1][j - 1] + v[i - 1][j + 1]) % rmd;

		v.push_back(tmp);
	}

	int result = 0;
	for (int i = 0; i < 10; i++)
		result = (result + v[n][i]) % rmd;

	return result;
}

int main() {
	int n;
	Floor f;

	cin >> n;
	cout << f.dp(n);
}