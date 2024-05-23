/* 2004 : ���� 0�� ���� */
// ���� ���� ������� ���丮�� 0�� ���� ���ϴ� �˰����� �ð����⵵�� �ʹ� ���Ҵ�.
// 20���� ���� ���� �۵� �����ϵ��� ����� ����
// ���丮�� 0�� ���� ���ϴ� �Լ��� ����ȭ�Ͽ���. ( ���ͳ� ���� )
// �ݷ� : 5 4 �� 0, ��� 1.
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
