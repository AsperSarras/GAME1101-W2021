#include"DynIntStack.h"

#include <iostream>
#include <cstdlib>
using namespace std;

void DynIntStack::push(int num)
{
	top = new StackNode(num, top);
}

void DynIntStack::pop(int& num)
{
	StackNode* temp;

	if (isEmpty())
	{
		cout << "The Stack is Empty.\n";
		exit(1);
	}
	else
	{
		//Stack contain items
		num = top->value;
		//Worry about deleting the item
		temp = top;
		top = top->next;
		delete temp;
		temp = nullptr;
	}
}

bool DynIntStack::isEmpty() const
{
	if(!top)// if top is not pointing to something
	{
		return true;
	}
	else
	{
		return false;
	}
}
