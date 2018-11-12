#include "LinkedList.cpp"
#include "Queue.cpp"
#include "Stack.cpp"
#include <iostream>
using namespace std;

int main()
{
	LinkedList<int> list;
	Stack<int> stack;
	Queue<int> queue;
	

	cout << "--LINKEDLIST--" << endl;
	list.length();
	list.push(4);
	list.push(6);
	list.display();
	list.push_first(1);
	list.display();
	list.insert_node(2, 10);
	list.display();
	list.delete_node(3);
	list.display();
	list.length();

	cout << "--STACK--" << endl;
	stack.length();
	stack.push(5);
	stack.push(1);
	stack.push(13);
	stack.push(7);
	stack.display();
	stack.pop();
	stack.display();
	stack.length();

	cout << "--QUEUE--" << endl;
	queue.display();
	queue.length();
	queue.enqueue(4);
	queue.enqueue(6);
	queue.enqueue(8);
	queue.enqueue(9);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.display();
	queue.dequeue();
	queue.dequeue();
	queue.display();
	queue.length();
	
}
