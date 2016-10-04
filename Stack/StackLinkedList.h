#pragma once

struct node {
	int data;
	node* next;
};

class StackLinkedList
{
private:
	struct node *top;
public:
	StackLinkedList();
	~StackLinkedList();
	void push(int data);
	int peek();
	void pop();
	bool isEmpty();
	void display();
	void destroy();
};

