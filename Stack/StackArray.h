#pragma once
class StackArray
{
	private:
		int top;
		int size;
		int *stack;

	public:
		StackArray(int size);
		~StackArray();
		void push(int value);
		int peek();
		void pop();
		bool isEmpty();
		void display();
};

