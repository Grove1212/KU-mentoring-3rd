/* 1929 : 소수 구하기 */
#include <iostream>
#include <vector>
using namespace std;

int arr[1000001] = { 0, };

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int M, N;
	cin >> M >> N;
	
	for (int i = 2; i <= N; i++) arr[i] = i;
	
	for (int i = 2; i*i <= N; i++) {
		if (arr[i] == 0) continue; // 소수x

		for (int j = i * i; j <= N; j+= i) {
			arr[j] = 0;
		}
	}

	for (int i = M; i <= N; i++)
		if (arr[i]!=0) cout << arr[i] << '\n';

	return 0;
}

/*
방법 1번 n^n
1. 나누어 떨어지는 수가 있을 때 break;
2. 나누어떨어지는 수 = 해당 수 이면 소수.
*/

/*
방법 2번 n*루트n
1. n = p * q (p, q <= 루트n)
2. 루트 n까지만 탐색
*/

/*
방법 3번 에라토스테네스의 체 nlogn
+ 2번 방법까지 도입
*/