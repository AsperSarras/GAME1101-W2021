#include "SortableVector.h"
template<class T>
inline void SortableVector<T>::Sort()
{
	T i, j, min, temp;
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
}