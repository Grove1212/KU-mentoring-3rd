/* 11052 : 카드 구매하기 */
#include <iostream>

using namespace std;
int N, card[10001], dp[10001];

int main(void) {
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> card[i];
	}

	dp[0] = 0;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i], dp[i - j] + card[j]);
		}
	cout << dp[N];
}