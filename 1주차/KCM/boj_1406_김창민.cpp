#include <iostream>
using namespace std;

class Deque {
private:
	struct Node {
		char c;
		Node* left;
		Node* right;
	};
	Node* head = new Node;
	Node* tail = new Node;
	Node* cursor = new Node;
public:
	Deque() {
		head->c = ' ';
		head->left = 0;
		head->right = tail;
		tail->c = ' ';
		tail->left = head;
		tail->right = 0;
		cursor->left = head;
		cursor->right = tail;
	}
	~Deque() {
		Node* tmp = head;
		while (tmp != tail) {
			tmp = tmp->right;
			delete tmp->left;
		}
		delete tail;
		delete cursor;
	}
	void insert(char);
	void del();
	void move_left();
	void move_right();
	void print();
};
void Deque::insert(char x) {
	Node* tmp = new Node;
	tmp->c = x;
	tmp->left = cursor->left;
	tmp->right = cursor->right;
	cursor->left->right = tmp;
	cursor->right->left = tmp;
	cursor->left = tmp;
}
void Deque::del() {
	if (cursor->left == head)
		return;

	Node* tmp = cursor->left;

	cursor->right->left = tmp->left;
	tmp->left->right = cursor->right;
	cursor->left = tmp->left;
	delete tmp;
}
void Deque::move_left() {
	if (cursor->left == head)
		return;
	
	cursor->right = cursor->left;
	cursor->left = cursor->left->left;
}
void Deque::move_right() {
	if (cursor->right == tail)
		return;

	cursor->left = cursor->right;
	cursor->right = cursor->right->right;
}
void Deque::print() {
	Node* node = head;
	string s = "";

	while (node->right != tail) {
		node = node->right;
		s += node->c;
	}

	cout << s;
}


int main() {
	Deque edit;
	string s;
	int n;
	char c, d;

	cin >> s;
	int cursor = s.length();
	int len = s.length();

	for (int i = 0; i < len; i++)
		edit.insert(s[i]);


	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> c;

		if (c == 'L') {
			edit.move_left();
		}
		else if (c == 'D') {
			edit.move_right();
		}
		else if (c == 'B') {
			edit.del();
		}
		else if (c == 'P') {
			cin >> d;
			edit.insert(d);
		}
	}

	edit.print();
}