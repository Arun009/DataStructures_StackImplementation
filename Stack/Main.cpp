#include <iostream>
#include <string>
#include "StackArray.h"
#include "StackLinkedList.h"
using namespace std;

void arrayImplementation();
void linkedListImplementation();

int main() {
	int mainMenuChoice = 0;
	while(1) {
		cout << "MAIN MENU" << endl;
		cout << "=========" << endl;
		cout << "1. Stack Implementation using Arrays" << endl;
		cout << "2. Stack Implementation using Linked Lists" << endl;
		cout << "3. Exit." << endl;
		cout << "Enter a choice :" << endl;
		cin >> mainMenuChoice;
		if (mainMenuChoice > 3 || mainMenuChoice < 1)
			cout << "Invalid Choice" << endl;
		switch (mainMenuChoice)
		{
			case 1:
				arrayImplementation();
				break;

			case 2:
				linkedListImplementation();
				break;

			case 3:
				exit(0);
		}
	}
	getchar();
	return 0;
}

void arrayImplementation()
{
	int size = 0;

	cout << endl << "Stack Implementation using Array" << endl;
	cout << "--------------------------------" << endl;
	enterSize: // goto identifier for entering size
	cout << "Enter the size of Stack" << endl;
	cin >> size;
	if (size <= 0) {
		cout << "Size should be greater than zero" << endl;
		goto enterSize;
	}

	StackArray stackArray(size);

	int choice = -1;
	do
	{
		cout << endl << "1. Push Value into Stack." << endl;
		cout << "2. Pop Value from Stack." << endl;
		cout << "3. Peek Top from Stack." << endl;
		cout << "4. Check Stack isEmpty." << endl;
		cout << "5. Display Stack" << endl;
		cout << "6. Main Menu" << endl;
		cout << "7. Exit." << endl;
		cout << "Enter a choice :";
		cin >> choice;
		if (choice > 7 || choice < 1)
			cout << "Invalid Choice" << endl;

		switch (choice)
		{
		case 1:
			int value;
			cout << endl << "Enter the value to be pushed into Stack" << endl;
			cin >> value;
			stackArray.push(value);
			break;

		case 2:
			stackArray.pop();
			break;

		case 3:
			if (!stackArray.isEmpty())
				cout << stackArray.peek() << endl;
			else
				cout << "Stack is empty" << endl;
			system("pause");
			break;

		case 4:
			if (stackArray.isEmpty())
				cout << "Stack is empty" << endl;
			else
				cout << "Stack is not empty" << endl;
			system("pause");
			break;

		case 5:
			stackArray.display();
			break;

		case 6:
			cout << endl;
			break;

		case 7:
			exit(0);
		}
	} while (choice != 6);
}

void linkedListImplementation()
{
	cout << endl << "Stack Implementation using Linked List" << endl;
	cout << "--------------------------------------" << endl;
	StackLinkedList linkedList;
	
	int choice = -1;
	do
	{
		cout << endl << "1. Push Value into Stack." << endl;
		cout << "2. Pop Value from Stack." << endl;
		cout << "3. Peek Top from Stack." << endl;
		cout << "4. Check Stack isEmpty." << endl;
		cout << "5. Display Stack" << endl;
		cout << "6. Main Menu" << endl;
		cout << "7. Exit." << endl;
		cout << "Enter a choice :";
		cin >> choice;
		if (choice > 7 || choice < 1)
			cout << "Invalid Choice" << endl;

		switch (choice)
		{
		case 1:
			int value;
			cout << endl << "Enter the value to be pushed into Stack" << endl;
			cin >> value;
			linkedList.push(value);
			break;

		case 2:
			linkedList.pop();
			break;

		case 3:
			if (!linkedList.isEmpty())
				cout << linkedList.peek() << endl;
			else
				cout << "Stack is empty" << endl;
			system("pause");
			break;

		case 4:
			if (linkedList.isEmpty())
				cout << "Stack is empty" << endl;
			else
				cout << "Stack is not empty" << endl;
			system("pause");
			break;

		case 5:
			linkedList.display();
			break;

		case 6:
			cout << endl;
			linkedList.destroy();
			break;

		case 7:
			linkedList.destroy();
			exit(0);
		}
	} while (choice != 6);
}