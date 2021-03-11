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

////Constructor. Set the size of the array
//template <class T>
//SimpleVector<T>::SimpleVector(int s)
//{
//	arraySize = s;
//	aptr = new T[arraySize];
//	for (int i=0; i<arraySize; i++)
//	{
//		aptr[i] = T(); //Assuming that the data type being used has a default constructor, cant put 0 for example because data type can be a string.
//	}
//}
//
////Copy constructor
//template <class T>
//SimpleVector<T>::SimpleVector(const SimpleVector& obj)
//{
//	arraySize = obj.arraySize;
//	aptr = new T[arraySize];
//	for (int i = 0; i < arraySize; i++)
//	{
//		aptr[i] = obj.aptr[i]; 
//	}
//}
//template <class T>
//SimpleVector<T>::~SimpleVector()
//{
//	if(arraySize>0)
//	{
//		delete[] aptr;
//	}
//}
//
////Subscript error function
//template <class T>
//void SimpleVector<T>::subError() const
//{
//	cout << "ERROR: Subscript out of range" << endl;
//	exit(0);
//}
//
//template <class T>
//void SimpleVector<T>::push_back(T n)
//{
//	if (last == NULL)
//	{
//		if (LastEmpty == true)
//		{
//			last = arraySize;
//			LastEmpty = false;
//		}
//	}
//	if (last==arraySize)
//	{
//		cout << "Array is Full!" << endl;
//	}
//	else
//	{
//		aptr[last] = n;
//		last++;
//	}
//	
//}
//
//template <class T>
//void SimpleVector<T>::pop_back()
//{
//	if(last==NULL)
//	{
//		if (LastEmpty ==true)
//		{
//			last = arraySize;
//			LastEmpty = false;
//		}
//	}
//
//	aptr[last - 1] = NULL;
//	last --;
//}
//
////Overloaded [] Operator. Takes in a subscript value and return an element from the array
//template <class T>
//T& SimpleVector<T>::operator[](int sub)
//{
//	if (sub < 0 || sub >= arraySize)
//	{
//		//Out of bounds
//		subError();
//	}
//	return aptr[sub];
//}
//
////Printing array
//template <class T>
//void SimpleVector<T>::print()
//{
//	if (last == NULL)
//	{
//		if (LastEmpty == true)
//		{
//			last = arraySize;
//			LastEmpty = false;
//		}
//	}
//	for (int i = 0; i < last; i++)
//	{
//		
//		cout << aptr[i] <<" ";
//
//	}
//	cout << endl;
//}









