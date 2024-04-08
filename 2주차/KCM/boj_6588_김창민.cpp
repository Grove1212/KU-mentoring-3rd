// ∞ÒµÂπŸ»Â¿« √ﬂ√¯ 6588
#include <iostream>
#include <vector>
using namespace std;

vector<bool> prime(1000001, true);

void set_prime() {
	prime[0] = false;
	prime[1] = false;

	for (int i = 2; i <= 1000000; i++)
		if (prime[i])
			for (int j = i * 2; j <= 1000000; j += i)
				prime[j] = false;
}

bool is_Prime(int n) {
	return prime[n];
}

void Goldbach(int n) {
	for (int i = 3; i <= n / 2; i += 2) {
		if (is_Prime(i) && is_Prime(n - i)) {
			cout << n << " = " << i << " + " << n - i << "\n";
			return;
		}
	}

	cout << "Goldbach's conjecture is wrong.\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	set_prime();
	
	while (1) {
		cin >> n;

		if (n == 0)
			break;

		Goldbach(n);
	}
}