#include"DynTempQueue.h"
#include<iostream>
#include<cstdlib>
using namespace std;

template <class T>
DynTempQueue<T>::DynTempQueue()
{
	front = nullptr;
	rear = nullptr;
}

template <class T>
DynTempQueue<T>::~DynTempQueue()
{
	clear();
}

template <class T>
void DynTempQueue<T>::enqueue(T num)
{
	if (isEmpty())
	{
		front = new QueueNode(num);
		rear = front;
	}
	else
	{
		rear->next = new QueueNode(num);
		rear = rear->next;
	}
}

template <class T>
void DynTempQueue<T>::dequeue(T& num)
{
	QueueNode* temp;
	if (isEmpty())
	{
		cout << "The Queue is Empty" << endl;
		exit(1);
	}
	else
	{
		num = front->value;
		temp = front;
		front = front->next;
		delete temp;
		temp = nullptr;
	}
}

template <class T>
T DynTempQueue<T>::dequeue()
{
	if (tempp != nullptr)
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
		tempp = front;
		front = front->next;
		return tempp->value;
	}
}

template <class T>
T DynTempQueue<T>::Call()
{
	if (tempp != nullptr)
	{
		tempp = nullptr;
	}
	if (tempp2 == nullptr)
	{
		tempp2 = front;
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
bool DynTempQueue<T>::isEmpty() const
{
	if (front == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class T>
void DynTempQueue<T>::clear()
{
	T value; //Dummy Variable;
	while (!isEmpty())
	{
		dequeue(value);
	}
}