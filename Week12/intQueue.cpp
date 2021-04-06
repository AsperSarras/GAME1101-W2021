#include "intQueue.h"
#include<iostream>
#include<cstdlib>
using namespace std;

intQueue::intQueue(int size)
{
	queueArray = new int[size];
	queueSize = size;
	clear();
}

intQueue::~intQueue()
{
	delete[] queueArray;
}

void intQueue::enqueue(int num)
{
	if(isFull())
	{
		cout << "The Queue is Full.\n";
		exit(1);
	}
	else
	{
		//Calculate new rear position
		rear = (rear + 1) % queueSize;
		// n = x % queueSize = What is left from x/queueSize.
		// if x<queueSize, n=x
		//insert the item
		queueArray[rear] = num;
		//Update Item count
		numItems++;
	}
}

void intQueue::dequeue(int& num)
{
	if(isEmpty())
	{
		cout << "The queue is Empty.\n";
		exit(1);
	}
	else
	{
		//Move front
		front = (front + 1) % queueSize;
		//Retrieve the front item
		num = queueArray[front];
		//Update item count
		numItems--;
	}
}

bool intQueue::isEmpty() const
{
	if(numItems>0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool intQueue::isFull() const
{
	if(numItems<queueSize)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void intQueue::clear()
{
	front = -1;
	rear = -1;
	numItems = 0;
}
