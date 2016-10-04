#include "StackArray.h"
#include <iostream>
#include <string>
using namespace std;

StackArray::StackArray(int size)
{
	stack = new int[size];
	this->size = size;
	top = -1;
}


StackArray::~StackArray()
{
	delete[] stack;
}

void StackArray::push(int value)
{
	if (top == size-1) {
		cout << "Stack is full: Cannot push new values" << endl;
		system("pause");
	}
	else {
		top++;
		stack[top] = value;
	}
}

int StackArray::peek()
{
	if (top == -1)
		return -1;
	else
		return stack[top];
}

void StackArray::pop()
{
	if (top == -1) {
		cout << "Stack is empty" << endl;
		system("pause");
	}
	else
		top--;
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
