/* 10430 : ������*/
/* 1�� ���� Ǭ ���������� �ѹ� �� ������ �� Ǯ��ҽ��ϴ�.*/
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