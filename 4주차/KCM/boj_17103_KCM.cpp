// 17103 ∞ÒµÂπŸ»Â¿« √ﬂ√¯

#include <iostream>
#include <vector>
using namespace std;

const int maxi = 1000001;
vector<bool> v(maxi, true);

void set() {
	v[0] = false;
	v[1] = false;

	for (int i = 2; i < maxi; i++) {
		if (v[i]) {
			for (int j = i * 2; j < maxi; j += i)
				v[j] = false;
		}
	}
}

int gp(int n) {
	int sum = 0;

	if (n == 4)
		return 1;

	for (int i = 3; i <= n / 2; i += 2) {
		if (v[i] && v[n - i])
			sum++;
	}

	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	set();

	int sum;
	int T, n;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> n;

		cout << gp(n) << "\n";
	}
}