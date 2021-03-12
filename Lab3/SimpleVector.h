#pragma once

#include <iostream>
#include <cstdlib>


using namespace std;

template<class T>
class SimpleVector
{
private:
	T* aptr;
	int arraySize;
	void subError() const; //Bound error message
public:
	SimpleVector(int);
	SimpleVector(const SimpleVector&);
	~SimpleVector();
	int last = 0;
	bool LastEmpty = true;

	int size()const
	{
		return arraySize;
	}
	void push_back(T n);
	void pop_back();
	T& operator[](int);
	void print();
};