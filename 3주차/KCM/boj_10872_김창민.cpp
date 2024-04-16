#include <iostream>
using namespace std;

int main() {
	long long int fac = 1;
	int n;

	cin >> n;

	for (int i = 2; i <= n; i++)
		fac *= i;

	cout << fac;
}