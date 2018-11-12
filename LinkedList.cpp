#include<iostream>
using namespace std;

template <typename T>
class LinkedList {

	struct listNode {
		T data;
		listNode *next;
	};
public:

	listNode *head, *tail;

	LinkedList() {
		head = NULL;
		tail = NULL;
	}

	void push_first(int value) {
		listNode *temp = new listNode;
		temp->data = value;
		temp->next = head;
		head = temp;
		cout << value << " IS INSERTED TO FIRST NODE" << endl;
	}

	void insert_node(int pos, int value) {
		listNode *pre = new listNode;
		listNode *cur = new listNode;
		listNode *temp = new listNode;
		cur = head;
		for (int i = 1; i < pos; i++) {
			pre = cur;
			cur = cur->next;
		}
		temp->data = value;
		pre->next = temp;
		temp->next = cur;
		cout << value << " IS INSERTED TO " << pos << " INDEX" << endl;
	}

	void push(int value) {
		listNode *temp = new listNode;
		temp->next = NULL;
		temp->data = value;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
		cout << value << " IS PUSHED" << endl;
	}

	void delete_node(int pos) {
		listNode *current = new listNode;
		listNode *previous = new listNode;
		current = head;
		for (int i = 1; i < pos; i++)
		{
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
		cout << current->data << " IS DELETED!" << endl;
		delete current;
	}

	void display() {
		listNode *iter = new listNode;
		iter = head;
		cout << "[ ";
		while (iter != NULL) {
			cout << iter->data << " ";
			iter = iter->next;
		}
		cout << "]" << endl;
	}

	void length() {
		listNode *temp = new listNode;
		int counter = 0;
		if (head == NULL)
			cout << "LIST IS EMPTY" << endl;
		else {
			temp = head;
			while (temp != NULL) {
				counter++;
				temp = temp->next;
			}
			cout << "SIZE OF LIST IS: " << counter << endl;
			delete temp;
		}
	}

};
