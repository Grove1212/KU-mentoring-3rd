/* 2004 : 조합 0의 개수 */
// 기존 내가 만들었던 팩토리얼 0의 개수 구하는 알고리즘은 시간복잡도가 너무 높았다.
// 20억의 수가 들어가도 작동 가능하도록 만들기 위해
// 팩토리얼 0의 개수 구하는 함수를 최적화하였다. ( 인터넷 참고 )
// 반례 : 5 4 답 0, 출력 1.
#include <iostream>
using namespace std;

long long getNumOfFact(long long N, int x) {
	long long cnt = 0;
	for (long long i = x; N/i >= 1; i *= x)
	{
		cnt += (N / i);
	}
	return cnt;
}

int main(void) {
	long long n, m;
	long long five = 0, two = 0;
	cin >> n >> m;
	
	five = getNumOfFact(n, 5) - getNumOfFact(m, 5) - getNumOfFact(m, 5);
	two = getNumOfFact(n, 2) - getNumOfFact(n - m, 2) - getNumOfFact(m, 5);
	cout << min(five, two);

	return 0;
}
