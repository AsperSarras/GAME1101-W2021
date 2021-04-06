#include <iostream>

#include "DynTempStack.h"
#include "DynTempStack.cpp"
using namespace std;

class Person
{
private:
	string m_name;
public:
	Person(){}
	void setName(string n)
	{
		m_name = n;
	}
	string getName()
	{
		return m_name;
	}
};

void PushStack(DynTempStack<Person> &s, Person p);
void PopStack(DynTempStack<Person> &s, Person p);

int main()
{
	//Persons
	Person Bob;
	Bob.setName("Bob");
	Person James;
	James.setName("James");
	Person Diego;
	Diego.setName("Diego");
	Person Benjamin;
	Benjamin.setName("Benjamin");
	Person Camila;
	Camila.setName("Camila");
	Person Sofia;
	Sofia.setName("Sofia");
	Person Daniel;
	Daniel.setName("Daniel");
	Person Rachel;
	Rachel.setName("Rachel");
	
	DynTempStack<int> stack;
	DynTempStack<Person> stack3;
	int catchVar; //This will catch the value that is popped off
	Person c;

	//QUEUE
	//Example with Int
	
	////STACKS
	////Example with Int
	//for(int i =5;i<=50;i= i+5)
	//{
	//	cout << "Push: " << i << endl;
	//	stack.push(i);
	//}
	//
	//cout << endl;

	//for (int i=1;i<=10;i++)
	//{
	//	cout << "Pop ";
	//	stack.pop(catchVar);
	//	cout << catchVar << endl;
	//}

	//cout << endl;

	////Example with Classes
	//PushStack(stack3, Diego);
	//PushStack(stack3, Camila);
	//PushStack(stack3, Benjamin);
	//PopStack(stack3, c);
	//PopStack(stack3, c);
	//PushStack(stack3, Sofia);
	//PopStack(stack3, c);
	//PopStack(stack3, c);
	//PushStack(stack3, Daniel);
	//PopStack(stack3, c);
	//cout << endl;
	
	return 0;
}

void PushStack(DynTempStack<Person> &s, Person p)
{
	s.push(p);
	cout << p.getName() << " entered the store!" << endl;
	//Display Current Stack
	
}

void PopStack(DynTempStack<Person> &s, Person p)
{
	p = s.pop();
	cout << p.getName() << " exited the store!" << endl;
	//Display Current Stack
}

