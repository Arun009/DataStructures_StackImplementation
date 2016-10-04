/*
A stack is an abstract data type. It is named stack as it behaves like a real-world stack, for example - deck of cards or pile of plates etc.
Stack allows operations at one end only. At ant given time, we can only access the top elements of a stack.
This feature makes it LIFO data structure. LIFO stands for Last-in-first-out. Here, the element which is placed (inserted or added) last, is accessed first.
In stack terminology, insertion operation is called PUSH operation and removal operation is called POP operation.

Basic Operations
push() : pushing/storing an element on the stack
pop() : removing an element from the stack
peek() : get the top data element of the stack
isEmpty() : check if stack is empty
*/
#pragma once

struct node {				// Declare a struct node that has a data and a pointer that points to the next value in the list
	int data;				// Stores the actual data
	node* next;				// next pointer points to the next node or element in the list, next is a nullptr if the node is the last element in the list
};

class StackLinkedList
{
private:
	struct node *top;		// Declare a struct node top : this is used to point to the node on top of the list
public:
	StackLinkedList();		// Constructor
	~StackLinkedList();		// Destructor
	void push(int data);	// For pushing/storing an element in the array
	int peek();				// Gets the element at top position in the array
	void pop();				// Remove the element at the top position
	bool isEmpty();			// Check if the stack is empty
	void display();			// Displays the list
	void destroy();			// Manually destroy the list
};

