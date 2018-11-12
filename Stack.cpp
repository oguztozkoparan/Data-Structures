#include <iostream>
using namespace std;

template <typename T>
class Stack {

	struct stackNode {
		T data;
		stackNode *next;
	};

public:

	stackNode *top;

	Stack() {
		top = NULL;
	}

	void display() {
		stackNode *temp = new stackNode;
		temp = top;
		cout << "[ ";
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << "]" << endl;
	}

	void push(int value) {
		stackNode *temp = new stackNode;
		temp->data = value;
		cout << "ENTERED VALUE: " << temp->data << endl;
		temp->next = top;
		top = temp;
	}

	void pop() {
		if (top != NULL) {
			stackNode *temp = new stackNode;
			temp = top;
			top = top->next;
			cout << temp->data << " IS DELETED" << endl;
			delete temp;
		}
		else
			cout << "STACK IS EMPTY" << endl;
	}

	void length() {
		stackNode *temp = new stackNode;
		int counter = 1;
		temp = top;
		if (temp == NULL) {
			cout << "STACK IS EMPTY! -FROM LENGTH" << endl;
		}
		else {
			while (temp->next != NULL) {
				temp = temp->next;
				counter++;
			}
			cout << "SIZE OF STACK IS : " << counter << endl;
		}
		delete temp;
	}
};
