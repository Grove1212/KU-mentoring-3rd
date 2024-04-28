/* 10799 : �踷���*/
#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

string str;
queue<pair<int, int>> steelStick; //�踷��� ��, �� ���� ����
vector<pair<int, int>> ssk;
vector<int> laser; // ������, �ݴ°�ȣ �ε��� ����
int result = 0;

void input() {
	cin >> str;
}

void sorting() { // �踷���, ������ ���� ������
	stack<int> stk;
	bool flag = 0; // �ٷ� ������ ���� ��ȣ���°�?
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			stk.push(i);
			flag = 1;
		}
		else if (str[i] == ')') {
			if (flag == 1) {//������
				laser.push_back(i);
			}
			else {//�踷���
				steelStick.push({ stk.top(),i });
				ssk.push_back({ stk.top(),i });
			}
			stk.pop();
			flag = 0;
		}
	}
	
	/*������ �ڵ�
	cout << "�������� : ";
	for (int i = 0; i < laser.size(); i++) {
		cout << laser[i] << ' ';
	}
	cout << '\n';

	cout << "�踷���� : ";
	for (int i = 0; i < steelStick.size(); i++) {
		cout << ssk[i].first << ", " << ssk[i].second << '\n';
	}	
	*/
}

void count() {
	while (!steelStick.empty()) {
		int cnt = 1;
		int start = steelStick.front().first;
		int end = steelStick.front().second;
		for (int i = 0; i < laser.size(); i++) {
			if (laser[i] > start && laser[i] < end) cnt++;
		}
		steelStick.pop();
		result += cnt;
	}
}

void print() {
	cout << result;
}

int main() {
	input();
	sorting();
	count();
	print();

	return 0;
}