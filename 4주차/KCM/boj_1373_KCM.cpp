// 1373 2진수 8진수
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	string bin;
	string oct = "";

	cin >> bin;

	int len = bin.length();
	int num = 0;
	int cnt = 3;
	int er = len % 3;

	if (er != 0) {
		for (int i = 0; i < er; i++)
			num += pow(2, er - i - 1) * (bin[i] - '0');
		
		oct += char(num + '0');

		num = 0;
	}

	for (int i = er; i < len; i++) {
		cnt--;

		num += pow(2, cnt) * (bin[i] - '0');

		if (cnt == 0) {
			oct += char(num + '0');
			num = 0;
			cnt = 3;
		}
	}

	cout << oct;
}