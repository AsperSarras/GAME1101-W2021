#pragma once
template<class T>
class DynTempQueue
{
private:
	class QueueNode
	{
		friend class DynTempQueue;
		T value;
		QueueNode* next;

		//Const
		QueueNode(T value1, QueueNode* next1 = nullptr)
		{
			value = value1;
			next = next1;
		}
	};

	QueueNode* front;
	QueueNode* rear;
	QueueNode* tempp;
	QueueNode* tempp2;
public:
	//Const/Destr
	DynTempQueue();
	~DynTempQueue();

	void enqueue(T);
	void dequeue(T&);
	T dequeue();
	T Call();
	bool isEmpty()const;
	void clear();
};
