#pragma once

template<class T>
class DynTempStack
{
private:
	class StackNode
	{
		friend class DynTempStack;
		T value;
		StackNode* next;

		//Const
		StackNode(T value1, StackNode* next1 = nullptr)
		{
			value = value1;
			next = next1;
		}
	};

	StackNode* top;
	StackNode* tempp;
public:
	DynTempStack()
	{
		top = nullptr;
	}
	void push(T);
	void pop(T&);
	T pop();
	bool isEmpty() const;
};
