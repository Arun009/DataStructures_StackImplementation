#include "StackArray.h"
#include <iostream>
#include <string>
using namespace std;

StackArray::StackArray(int size)	// Constructor
{
	stack = new int[size];			// Initialize the array using the size entered during run time
	this->size = size;				// Set the size attribute of the class to the size passesd to the constructor
	top = -1;						// Initialilly top is set to -1 as stack is empty
}


StackArray::~StackArray()
{
	delete[] stack;					// Delete the array
}

void StackArray::push(int value)
{
	if (top == size-1) {			// if top equals size-1, means the stack is full
		cout << "Stack is full: Cannot push new values" << endl;
		system("pause");
	}
	else {							// if the stack is not full,
		top++;						// increment top and
		stack[top] = value;			// store the value at the 'top' position
	}
}

int StackArray::peek()
{
	if (top == -1)					// if top equals -1, means the stack is empty
		return -1;
	else
		return stack[top];			// else retun the value at the 'top' position in stack
}

void StackArray::pop()
{
	if (top == -1) {				// if top equals -1, means the stack is empty
		cout << "Stack is empty" << endl;
		system("pause");
	}
	else
		top--;						// decrement top
}

bool StackArray::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}

void StackArray::display()
{
	if(this->isEmpty())
		cout << "Stack is empty" << endl;
	else {
		cout << endl;
		for(int i = top; i >= 0; i--) {
			cout << stack[i] << endl;
		}
	}
	system("pause");
}
