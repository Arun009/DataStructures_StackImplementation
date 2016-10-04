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
class StackArray
{
	private:
		int top;				// Stores the position of the last pushed data in the array. -1 if stack is empty
		int size;				// Size of the stack
		int *stack;				// Pointer that is used to point to the array

	public:
		StackArray(int size);	// Constructor
		~StackArray();			// Destructor
		void push(int value);	// For pushing/storing an element in the array
		int peek();				// Gets the element at top position in the array
		void pop();				// Remove the element at the top position
		bool isEmpty();			// Checks if the stack is empty
		void display();			// Displays the array elements
};

