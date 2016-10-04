#include "StackLinkedList.h"
#include <iostream>
#include <string>
using namespace std;

StackLinkedList::StackLinkedList()
{
	top = nullptr;
}


StackLinkedList::~StackLinkedList()
{
}

void StackLinkedList::push(int data)
{
	struct node *newNode;
	if (top == nullptr) {
		newNode = new node;
		newNode->data = data;
		newNode->next = nullptr;
	}
	else {
		newNode = new node;
		newNode->data = data;
		newNode->next = top;
	}
	top = newNode;
}

int StackLinkedList::peek()
{
	if (top == nullptr)
		return -1;
	else
		return top->data;
}

void StackLinkedList::pop()
{
	if (top == nullptr) {
		cout << "Stack is empty" << endl;
		system("pause");
	}
	else {
		struct node *temp;
		temp = top;
		top = top->next;
		delete temp;
	}
}

bool StackLinkedList::isEmpty()
{
	if (top == nullptr)
		return true;
	else
		return false;
}

void StackLinkedList::display()
{
	cout << endl;
	struct node *ptr = top;
	while (ptr != nullptr) {
		cout << ptr->data << endl;
		ptr = ptr->next;
	}
	system("pause");
}

void StackLinkedList::destroy()
{
	while (top != nullptr) {
		struct node *deleteNode;
		deleteNode = top;
		top = top->next;
		delete deleteNode;
	}
}
