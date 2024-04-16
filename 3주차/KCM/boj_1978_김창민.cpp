// 소수 찾기
#include <iostream>
#include <vector>
using namespace std;

vector<bool> prime(1001, true);

void set_prime() {
	prime[0] = false;
	prime[1] = false;

	for (int i = 2; i < 1001; i++) {
		if (prime[i]) {
			for (int j = i * 2; j < 1001; j += i)
				prime[j] = false;
		}
	}
}

bool is_prime(int n) {
	return prime[n];
}

int main() {
	int N, a;
	int cnt = 0;

	set_prime();

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> a;

		if (is_prime(a))
			cnt++;
	}

	cout << cnt;
}