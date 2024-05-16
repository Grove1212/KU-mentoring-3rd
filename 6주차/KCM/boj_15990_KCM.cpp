// 15990 1, 2, 3 더하기 5

#include <iostream>
#include <vector>
using namespace std;

class Plus {
	vector<vector<int>> v;
	int rmd = 1000000009;
public:
	Plus() {
		vector<int> tmp(3, 0);
		v.push_back(tmp);

		tmp[0] = 1;
		v.push_back(tmp);

		tmp[0] = 0; tmp[1] = 1;
		v.push_back(tmp);

		tmp[0] = 1; tmp[2] = 1;
		v.push_back(tmp);
	}
	int dp(int);
};

int Plus::dp(int n) {
	if (n < 1)
		return 0;

	if (n < v.size()) 
		return ((v[n][0] + v[n][1]) % rmd + v[n][2]) % rmd;

	vector<int> tmp(3, 0);

	for (int i = v.size(); i <= n; i++) {
		tmp[0] = (v[i - 1][1] + v[i - 1][2]) % rmd;
		tmp[1] = (v[i - 2][0] + v[i - 2][2]) % rmd;
		tmp[2] = (v[i - 3][0] + v[i - 3][1]) % rmd;
		v.push_back(tmp);
	}

	return ((v[n][0] + v[n][1]) % rmd + v[n][2]) % rmd;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t, n;
	Plus p;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;

		cout << p.dp(n) << "\n";
	}
}