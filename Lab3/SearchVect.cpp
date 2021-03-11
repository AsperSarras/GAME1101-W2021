#include "SearchVect.h"

//Looks for an item and return the subscript of where it is located
//Binary Search
template <class T>
int SearchableVector<T>::findItem(T item)
{

	T i, j, min, temp;
	T first = 0, last = this->size(), mid;
	bool found=false;

	//Sorting
	for (i = 0; i < this->size() - 1; i++)
	{
		min = i;
		for (j = i + 1; j < this->size(); j++)
		{
			if (this->operator[](j) < this->operator[](min))
			{
				min = j;
			}
		}
		temp = this->operator[](i);
		this->operator[](i) = this->operator[](min);
		this->operator[](min) = temp;
	}

	//Binary Search
	if (this->size() >= first)
	{
		for (int i = 0; i < this->size(); i++)
		{
			mid = (first + last) / 2;
			if (this->operator[](mid) == item)
			{
				found = true;
				return  mid;
			}
			if (this->operator[](mid) < item)
			{
				first = mid + 1;
			}
			if (this->operator[](mid) > item)
			{
				last = mid - 1;
			}
		}
	}
	if(found==false)
	{
		return -1;
	}
}