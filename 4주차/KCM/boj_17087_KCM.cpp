// 17087 ¼û¹Ù²ÀÁú 6

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

class HideNSeek {
	int GCD(int, int);
	int n;
	int st;
	vector<int> A;
public:
	HideNSeek(int a, int b) {
		this->n = a;
		this->st = b;
	}
	void input();
	int maxD();
};

int HideNSeek::GCD(int x, int y) {
	int tmp;

	if (x < y) {
		tmp = x;
		x = y;
		y = tmp;
	}

	while (y != 0) {
		tmp = x % y;
		x = y;
		y = tmp;
	}

	return x;
}

void HideNSeek::input() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int tmp;

	for (int i = 0; i < this->n; i++) {
		cin >> tmp;
		A.push_back(tmp);
	}
}

int HideNSeek::maxD() {
	if (n == 1)
		return abs(st - A[0]);
	/*
	int tmp = abs(A[0] - A[1]);
	for (int i = 1; i < n - 1; i++) {
		tmp = GCD(tmp, abs(A[i] - A[i + 1]));
	}

	int max = 0;
	int tmp2;
	for (int i = 0; i < n; i++) {
		tmp2 = GCD(tmp, st - A[i]);
		if (max < tmp2)
			max = tmp2;
	}

	return max;
	*/

	int tmp = abs(st - A[0]);
	for (int i = 1; i < n; i++)
		tmp = GCD(tmp, abs(st - A[i]));

	return tmp;
}

int main() {
	int N, S;

	cin >> N >> S;

	HideNSeek hnc(N, S);
	hnc.input();

	cout << hnc.maxD();
}