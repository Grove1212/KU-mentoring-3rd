// 1463	1로 만들기

#include <iostream>
#include <vector>
using namespace std;

class makeOne {
	vector<int> v;
	int x;
public:
	makeOne(int n) {
		x = n;
		v.assign(n + 1, 0);
		v[0] = 0;
		v[1] = 0;
	}
	int dp();
};

int makeOne::dp() {
	if (x < 2)
		return v[x];

	for (int i = 1; i < x; i++) {
		if (i + 1 <= x) {
			if (v[i + 1] == 0) {
				v[i + 1] = v[i] + 1;
			}
			else if (v[i + 1] > v[i] + 1) {
				v[i + 1] = v[i] + 1;
			}
		}

		if (i * 2 <= x) {
			if (v[i * 2] == 0) {
				v[i * 2] = v[i] + 1;
			}
			else if (v[i * 2] > v[i] + 1) {
				v[i * 2] = v[i] + 1;
			}
		}

		if (i * 3 <= x) {
			if (v[i * 3] == 0) {
				v[i * 3] = v[i] + 1;
			}
			else if (v[i * 3] > v[i] + 1) {
				v[i * 3] = v[i] + 1;
			}
		}
	}

	return v[x];
}

int main() {
	int n;

	cin >> n;

	makeOne m(n);

	cout << m.dp();
}