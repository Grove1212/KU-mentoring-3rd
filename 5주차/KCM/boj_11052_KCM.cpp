// 11052 카드 구매하기

#include <iostream>
#include <vector>
using namespace std;

class BuyCard {
	int n;
	vector<int> P;
	vector<int> dp;
public:
	BuyCard() {
		n = 0;
	}
	void input();
	int maxCost();
};

void BuyCard::input() {
	cin >> n;

	P.assign(n + 1, 0);
	dp.assign(n + 1, 0);

	for (int i = 0; i < n; i++)
		cin >> P[i + 1];

	dp[1] = P[1];
}

int BuyCard::maxCost() {
	int cost;

	for (int i = 2; i < n + 1; i++) {
		for (int j = 1; j < i + 1; j++) {
			cost = P[j] + dp[i - j];

			if (dp[i] < cost)
				dp[i] = cost;
		}
	}

	return dp[n];
}

int main() {
	int n;
	BuyCard bc;
	
	bc.input();

	cout << bc.maxCost();
}