#include <iostream>
using namespace std;

class Deque {
private:
	struct Node {
		int n;
		Node* left;
		Node* right;
	};
	Node* head = new Node;
	Node* tail = new Node;
	int dsize;
public:
	Deque() {
		dsize = 0;
		head->n = -1;
		head->left = 0;
		head->right = tail;
		tail->n = -1;
		tail->left = head;
		tail->right = 0;
	}
	~Deque() {
		Node* tmp = head;
		while (tmp != tail) {
			tmp = tmp->right;
			delete tmp->left;
		}
		delete tail;
	}
	void push_front(int);
	void push_back(int);
	int pop_front();
	int pop_back();
	int size();
	bool empty();
	int front();
	int back();
};
void Deque::push_front(int x) {
	Node* tmp = new Node;
	tmp->n = x;
	tmp->left = head;
	tmp->right = head->right;
	head->right->left = tmp;
	head->right = tmp;

	dsize++;
}
void Deque::push_back(int x) {
	Node* tmp = new Node;
	tmp->n = x;
	tmp->left = tail->left;
	tmp->right = tail;
	tail->left->right = tmp;
	tail->left = tmp;

	dsize++;
}
int Deque::pop_front() {
	if (dsize == 0) {
		return -1;
	}
	
	Node* tmp = head->right;
	int tn = tmp->n;

	head->right = tmp->right;
	tmp->right->left = head;
	delete tmp;
	
	dsize--;

	return tn;
}
int Deque::pop_back() {
	if (dsize == 0) {
		return -1;
	}

	Node* tmp = tail->left;
	int tn = tmp->n;

	tail->left = tmp->left;
	tmp->left->right = tail;
	delete tmp;

	dsize--;

	return tn;
}
int Deque::size() {
	return dsize;
}
bool Deque::empty() {
	if (dsize == 0)
		return true;
	return false;
}
int Deque::front() {
	return head->right->n;
}
int Deque::back() {
	return tail->left->n;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	Deque d;
	string s;
	int x, n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;

		if (s == "push_front") {
			cin >> x;
			d.push_front(x);
		}
		else if (s == "push_back") {
			cin >> x;
			d.push_back(x);
		}
		else if (s == "pop_front") {
			cout << d.pop_front() << "\n";
		}
		else if (s == "pop_back") {
			cout << d.pop_back() << "\n";
		}
		else if (s == "size") {
			cout << d.size() << "\n";
		}
		else if (s == "empty") {
			cout << int(d.empty()) << "\n";
		}
		else if (s == "front") {
			cout << d.front() << "\n";
		}
		else if (s == "back") {
			cout << d.back() << "\n";
		}
	}
}