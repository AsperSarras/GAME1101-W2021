#include"DynIntQueue.h"
#include<iostream>
#include<cstdlib>
using namespace std;

DynIntQueue::DynIntQueue()
{
	front = nullptr;
	rear = nullptr;
}

DynIntQueue::~DynIntQueue()
{
	clear();
}

void DynIntQueue::enqueue(int num)
{
	if(isEmpty())
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

void DynIntQueue::dequeue(int& num)
{
	QueueNode* temp;
	if(isEmpty())
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

bool DynIntQueue::isEmpty() const
{
	if(front==nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void DynIntQueue::clear()
{
	int value; //Dummy Variable;
	while(!isEmpty())
	{
		dequeue(value);
	}
}
