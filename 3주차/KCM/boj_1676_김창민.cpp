// 팩토리얼 0의 개수
#include <iostream>
using namespace std;

int main() {
	int ten = 0;
	int N, tmp;

	cin >> N;

	tmp = N;

	while (tmp != 0) {
		ten += tmp / 5;
		tmp /= 5;
	}

	cout << ten;
}