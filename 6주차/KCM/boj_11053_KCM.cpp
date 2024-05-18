// 11053 가장 긴 증가하는 부분 수열

#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

int maxLen(int n) {
	vector<int> v(n + 2, 0);
	int max = 1;
	v[1] = arr[0];

	for (int i = 1; i < n; i++) { // arr iter
		for (int j = 1; j <= max; j++) { // v iter
			if (v[j] < arr[i] && (v[j + 1] == 0 || v[j + 1] > arr[i])) {
				v[j + 1] = arr[i];
			}
			else if (v[j] > arr[i] && v[j - 1] < arr[i]) {
				v[j] = arr[i];
			}
		}

		if (v[max + 1] != 0)
			max++;
	}

	return max;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, x;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		arr.push_back(x);
	}

	cout << maxLen(n);

}