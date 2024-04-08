// 오등큰수 17299
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

	vector<int> NGF(n, -1);
	vector<int> v(n);
	vector<int> F(1000001, 0);

	for (int i = 0; i < n; i++) {
		cin >> a;

		v[i] = a;
		F[a] = F[a] + 1;
	}

	for (int i = 0; i < n; i++) {
		while (!s.empty() && s.top().first < F[v[i]]) {
			NGF[s.top().second] = v[i];
			s.pop();
		}

		s.push({ F[v[i]], i });
	}

	for (int i = 0; i < n; i++) {
		cout << NGF[i] << ' ';
	}
}