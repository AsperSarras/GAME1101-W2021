#pragma once
#include "SimpleVector.h"

template<class T>
class SortableVector: public SimpleVector<T>
{
public:
	SortableVector(int s) : SimpleVector<T>(s) {}
	SortableVector(SortableVector& obj) :SimpleVector<T>(obj) {};
	SortableVector(SimpleVector<T>& obj) : SimpleVector<T>(obj) {};
	void Sort();
};