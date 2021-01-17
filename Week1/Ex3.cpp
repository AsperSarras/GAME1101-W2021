#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string m_name;
	int m_age;

public:

	Person()
	{
		m_name = "";
		m_age = 0;
	}

	Person(string name1, int age1)
	{
		m_name = name1;
		m_age = age1;
	}

	string getName() {
		return m_name;
	}

	int getAge() {
		return m_age;
	}
};

struct Rectangle {
	int width, height;
};

int main()
{
	Rectangle* pRect = nullptr;
	Person* pPers = nullptr;

	//Not dinamic allocation
	Rectangle rect;
	pRect = &rect;

	pRect->width = 10;
	pRect->height = 20;

	cout << "Area of the rectangle is " << pRect->width * pRect->height << endl;
	//pRect = nullptr; deallocating

	//Dynamic allocation
	pRect = new Rectangle;
	pRect->width = 6;
	pRect->height = 5;
	cout << "Area of the rectangle is " << pRect->width * pRect->height << endl;
	delete pRect;
	pRect = nullptr;

	pPers = new Person("Asper Sarras", 26);
	cout << pPers->getName() << " is " << pPers->getAge() << " years old" << endl;
	delete pPers;
	pPers = nullptr;

	return 0;
}