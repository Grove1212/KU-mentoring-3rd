// 14002 가장 긴 증가하는 부분 수열 4

#include <iostream>
#include <vector>
using namespace std;

class maxL {
	int n;
	vector<int> arr;
	vector<vector<int>> v;
public:
	maxL(int k) {
		n = k;
		vector<int> tmp;
		v.assign(1002, tmp);
	}
	void input();
	int maxLen();
	void printArr(int);
};

void maxL::input() {
	int x;

	for (int i = 0; i < n; i++) {
		cin >> x;
		arr.push_back(x);
	}
}

int maxL::maxLen() {
	int max = 1;
	vector<int> tmp;
	v[1].push_back(arr[0]);

	for (int i = 1; i < n; i++) { // arr iter
		for (int j = 1; j <= max; j++) { // v iter
			if (v[j][v[j].size() - 1] < arr[i] && (v[j + 1].size() == 0 || v[j + 1][v[j + 1].size() - 1] > arr[i])) {
				v[j + 1] = v[j];
				v[j + 1].push_back(arr[i]);
			}
			else if (v[j][v[j].size() - 1] > arr[i] && (v[j - 1].size() == 0 || v[j - 1][v[j - 1].size() - 1] < arr[i])) {
				v[j] = v[j - 1];
				v[j].push_back(arr[i]);
			}
		}

		if (v[max + 1].size() != 0)
			max++;
	}

	return max;
}

void maxL::printArr(int max) {
	for (int i = 0; i < v[max].size(); i++)
		cout << v[max][i] << ' ';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;

	cin >> n;

	maxL ml(n);
	ml.input();
	
	int max = ml.maxLen();
	
	cout << max << "\n";
	ml.printArr(max);
}