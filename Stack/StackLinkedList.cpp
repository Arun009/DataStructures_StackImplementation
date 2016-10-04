#include "StackLinkedList.h"
#include <iostream>
#include <string>
using namespace std;

StackLinkedList::StackLinkedList()		// Constructor
{
	top = nullptr;						// Initialize the top to nullptr
}


StackLinkedList::~StackLinkedList()
{
}

void StackLinkedList::push(int data)	// Push data
{
	struct node *newNode;				// Declare a new struct node
	if (top == nullptr) {				// Check if the stack is empty
		newNode = new node;				// if yes, initialize the new node
		newNode->data = data;			// Set the data attribute of the node
		newNode->next = nullptr;		// Since this is the only node, set the next pointer to nullptr
	}
	else {								// If the stack is not empty
		newNode = new node;				// initialize the new node
		newNode->data = data;			// Set the data attribute of the node
		newNode->next = top;			// Set the next pointer to point to the node top
	}
	top = newNode;						// Finally set the new node as top
}

int StackLinkedList::peek()
{
	if (top == nullptr)					// Check if stack is empty
		return -1;
	else
		return top->data;				// Else retun data stored in the top node
}

void StackLinkedList::pop()
{
	if (top == nullptr) {				// Check if stack is empty
		cout << "Stack is empty" << endl;
		system("pause");
	}
	else {								// If stack contains value
		struct node *temp;				// Declare a temporary struct node
		temp = top;						// Set the temp to the top node
		top = top->next;				// Set top to the node pointed by next
		delete temp;					// Delete the temp node
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

void StackLinkedList::destroy()			// Delete the list manually
{
	while (top != nullptr) {			// Until top becomes nullptr do the below
		struct node *deleteNode;		// Declare a temporary node
		deleteNode = top;				// Set the temp node to point to the top
		top = top->next;				// Set top to point to the node pointed by next
		delete deleteNode;				// Delete the temp node
	}
}
