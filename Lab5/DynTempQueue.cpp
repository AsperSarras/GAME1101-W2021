#include"DynTempQueue.h"
#include<iostream>
#include<cstdlib>
using namespace std;

DynTempQueue::DynTempQueue()
{
	front = nullptr;
	rear = nullptr;
}

DynTempQueue::~DynTempQueue()
{
	clear();
}

void DynTempQueue::enqueue(int num)
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

void DynTempQueue::dequeue(int& num)
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

bool DynTempQueue::isEmpty() const
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

void DynTempQueue::clear()
{
	int value; //Dummy Variable;
	while (!isEmpty())
	{
		dequeue(value);
	}
}