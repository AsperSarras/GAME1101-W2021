#include"DynTempStack.h"

#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
void DynTempStack<T>::push(T num)
{
	top = new StackNode(num, top);
}

template <class T>
void DynTempStack<T>::pop(T& num)
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

template<class T>
T DynTempStack<T>::pop()
{
	if(tempp!=nullptr)
	{
		tempp = nullptr;
	}

	if (isEmpty())
	{
		cout << "The Stack is Empty.\n";
		exit(1);
	}
	else
	{
		//Worry about deleting the item
		tempp = top;
		top = top->next;
		return tempp->value;
	}
}

template <class T>
T DynTempStack<T>::Call()
{
	if (tempp != nullptr)
	{
		tempp = nullptr;
	}
	if (tempp2 == nullptr)
	{
		tempp2 = top;
	}

	if (isEmpty())
	{
		cout << "The Stack is Empty.\n";
		exit(1);
	}
	else
	{
		//Worry about deleting the item
		tempp = tempp2;
		tempp2 = tempp2->next;
		return tempp->value;
	}
}

template <class T>
bool DynTempStack<T>::isEmpty() const
{
	if (!top)// if top is not pointing to something
	{
		return true;
	}
	else
	{
		return false;
	}
}
