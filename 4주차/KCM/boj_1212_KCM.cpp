// 1212 8진수 2진수

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	string oct;
	string bin = "";
	char tmp;

	cin >> oct;

	int len = oct.length();

	tmp = oct[0];

	if (tmp >= '4') {
		bin += '1';
		tmp -= 4;

		if (tmp >= '2') {
			bin += '1';
			tmp -= 2;
		}
		else{
			bin += '0';
		}

		bin += tmp;
	}
	else if (tmp >= '2') {
		bin += '1';
		bin += tmp - 2;
	}
	else {
		bin += tmp;
	}

	for (int i = 1; i < len; i++) {
		tmp = oct[i];

		bin += (tmp - '0') / 4 + '0';
		bin += ((tmp - '0') % 4) / 2 + '0';
		bin += (tmp - '0') % 2 + '0';
	}

	cout << bin;
}