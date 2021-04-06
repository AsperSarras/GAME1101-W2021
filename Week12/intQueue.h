#pragma once

class intQueue
{
private:
	int* queueArray;	//Array
	int queueSize;		// Capacity of the queue
	int front;			//Where the front is
	int rear;			//Where rear is
	int numItems;		//Number of items on the queue 
public:
	intQueue(int);
	~intQueue();
	void enqueue(int);
	void dequeue(int&);
	bool isEmpty()const;
	bool isFull()const;
	void clear();
};
