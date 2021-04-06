#pragma once
class IntStack
{
private:
	int* stackArray;
	int capacity;
	int top;
public:
	IntStack(int capacity);
	~IntStack()
	{
		delete[] stackArray;
	}

	void push(int value);
	void pop(int& value);
	bool isEmpty() const;

	//Stack Exception
	class Overflow{};
	class Underflow{};
};

