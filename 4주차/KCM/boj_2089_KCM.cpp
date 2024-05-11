// 2089 -2Áø¼ö

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int dec;
	string mbin = "";
	int rmd;

	cin >> dec;

	if (dec == 0) {
		cout << '0';
		return 0;
	}

	while (dec != 0) {
		rmd = dec % -2;

		if (rmd == -1) {
			dec = dec / -2 + 1;
			mbin += '1';
		}
		else {
			mbin += char(dec % -2 + '0');
			dec /= -2;
		}
	}

	reverse(mbin.begin(), mbin.end());

	cout << mbin;
}