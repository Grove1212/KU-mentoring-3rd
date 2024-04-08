// ¿ÀÅ«¼ö 17298
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, a;
	stack<pair<int, int>> s;

	cin >> n;
	
	vector<int> v(n, -1);

	for (int i = 0; i < n; i++) {
		cin >> a;

		while (!s.empty() && s.top().first < a) {
			v[s.top().second] = a;
			s.pop();
		}

		s.push({a, i});
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << ' ';
	}
}