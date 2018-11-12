#include <iostream>

using namespace std;

template <typename T>
class Queue {
	struct Qnode {
		T data;
		Qnode *next;
	};

public:
	Qnode *front, *back;

	Queue() {
		front = NULL;
		back = NULL;
	}

	bool isEmpty() {
		if (back == NULL)
			return 1;
		else
			return 0;
	}

	void display() {
		if (isEmpty()) {
			cout << "QUEUE IS EMPTY" << endl;
		}
		else {
			Qnode *iter = new Qnode;
			iter = front;
			cout << "[ ";
			while (iter != NULL) {
				cout << iter->data << " ";
				iter = iter->next;
			}
			cout << "]" << endl;
			delete iter;
		}
	}

	void enqueue(int value) {
		Qnode *temp = new Qnode;
		temp->data = value;
		if (isEmpty()) {
			front = temp;
			back = temp;
		}
		else {
			back->next = temp;
			back = temp;
			temp->next = NULL;
		}
		cout << value << " IS ENQUEUED." << endl;
	}

	void dequeue() {
		Qnode *temp = new Qnode;
		if (isEmpty()) {
			cout << "QUEUE IS EMPTY." << endl;
		}
		else {
			temp = front;
			front = front->next;
			cout << temp->data << " IS DEQUEUED." << endl;
			delete temp;
		}
	}

	void length() {
		if (!isEmpty()) {
			Qnode *iter = new Qnode;
			int counter = 0;
			iter = front;
			while (iter != NULL) {
				counter++;
				iter = iter->next;
			}
			cout << "SIZE OF QUEUE IS: " << counter << endl;
			delete iter;
		}
		else {
			cout << "QUEUE IS EMPTY!" << endl;
		}
	}

};
