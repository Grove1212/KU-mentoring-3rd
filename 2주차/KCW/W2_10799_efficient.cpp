/* 10799 : �踷���*/
/*
�� �ڵ�� �ð��� ���� 500ms�� �ɷ��� �ٸ� �ڵ带 �����Ͽ����ϴ�
��ä�� Ǯ�� : �������� ���� Ǯ��
���� Ǯ�� : ������ ���� Ǯ��
������ ����
������ ���� ���� ��ȣ ���� -> �������� �ڸ��� ������ ����
�������� ��ȣ�� ���� �� : 1�� �߰�����(�������� �ѹ� �ڸ��� �ΰ��� ������ ����)
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout.tie(0);
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int count = 0;
    int sum = 0;

    string pipe;
    cin >> pipe;

    int len = pipe.length();
    for (int i = 0; i < len; i++) {
        if (pipe[i] == '(') count++;
        else {
            count--;
            if (pipe[i - 1] == '(') sum += count;
            else sum++;
        }
    }
    cout << sum << "\n";
    return 0;
}