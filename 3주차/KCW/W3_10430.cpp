/* 10430 : 나머지*/
/* 1년 전에 푼 문제이지만 한번 더 복기할 겸 풀어보았습니다.*/
#include <iostream>
using namespace std;

int main(void) {
	int A, B, C;
	cin >> A >> B >> C;

	cout << (A + B) % C << '\n';
	cout << ((A % C) + (B % C)) % C << '\n';
	cout << (A * B) % C << '\n';
	cout << ((A % C) * (B % C)) % C << '\n';

	return 0;
}