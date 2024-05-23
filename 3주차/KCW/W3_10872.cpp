/* 10872 : ÆÑÅä¸®¾ó */
#include <iostream>
using namespace std;

int N;

int main(void) {
	cin >> N;
	int fact = 1;
	for (int i = 1; i <= N; i++)
		fact *= i;
	cout << fact;

	return 0;
}