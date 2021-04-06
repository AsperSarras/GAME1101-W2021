#include "intStack.h"

IntStack::IntStack(int capacity)
{
	this->capacity = capacity;
	stackArray = new int[capacity];
	top = 0;
}

void IntStack::push(int value)
{
	//Check is array is full
	if(top==capacity)
	{
		//Throw and Overflow Exception that can be caught in a catch statement. you need both a try and a catch.
		throw IntStack::Overflow();
	}
	//If stack is not full
	stackArray[top] = value;
	top++;
}

void IntStack::pop(int& value)
{
	//Check if Stack is empty
	if (isEmpty())
	{
		throw IntStack::Underflow();
	}
	//if it is not empty
	top--;
	value = stackArray[top];
}

bool IntStack::isEmpty() const
{
	if (top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
