#include <iostream>


#include "DynTempQueue.h"
#include "DynTempQueue.cpp"
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

void PushQueue(DynTempQueue<Person>& s, Person p);
void PopQueue(DynTempQueue<Person>& s, Person p);

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
	DynTempQueue<int> iQueue;
	DynTempQueue<Person> cQueue;
	int catchVar; //This will catch the value that is popped off
	Person catchStackPerson;
	Person catchQueuePerson;

	//QUEUE

	
	
	//Example with Int
	cout << "Queue Example with Int" << endl;
	cout << "Enqueu 10 items...\n";
	for (int i = 1; i <= 10; i++)
	{
		int v = i * i;
		iQueue.enqueue(v);
		cout << v << " added to the queue!" << endl;
	}
	cout << "Removing 10 items from queue...\n";
	while (!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		cout << value << " removed from the queue!" << endl;
	}
	cout << endl;
	
	//Example with Classes
	cout << "Queue Example with classes" << endl;
	PushQueue(cQueue, Daniel);
	PushQueue(cQueue, Camila);
	PopQueue(cQueue, catchQueuePerson);
	PushQueue(cQueue, Sofia);
	PushQueue(cQueue, Benjamin);
	PopQueue(cQueue, catchQueuePerson);
	PopQueue(cQueue, catchQueuePerson);
	PushQueue(cQueue, James);
	PopQueue(cQueue, catchQueuePerson);
	PopQueue(cQueue, catchQueuePerson);
	cout << endl << endl;
	//STACKS
	//Example with Int
	cout << "Example of Stack with Int" << endl;
	cout << "Pushing 10 items into the Stack" << endl;

	for(int i =5;i<=50;i= i+5)
	{
		cout << "Push: " << i << endl;
		stack.push(i);
	}
	
	cout << "Removing 10 items from the Stack" << endl;
	for (int i=1;i<=10;i++)
	{
		cout << "Pop ";
		stack.pop(catchVar);
		cout << catchVar << endl;
	}

	cout << endl;

	//Example with Classes
	cout << "Example of Stack with Classes" << endl;
	PushStack(stack3, Diego);
	PushStack(stack3, Camila);
	PushStack(stack3, Benjamin);
	PopStack(stack3, catchStackPerson);
	PopStack(stack3, catchStackPerson);
	PushStack(stack3, Sofia);
	PopStack(stack3, catchStackPerson);
	PopStack(stack3, catchStackPerson);
	PushStack(stack3, Daniel);
	PopStack(stack3, catchStackPerson);
	cout << endl;
	
	return 0;
}

void PushStack(DynTempStack<Person> &s, Person p)
{
	s.push(p);
	cout << p.getName() << " entered the Stack!" << endl;
	//Display Current Stack

}

void PopStack(DynTempStack<Person> &s, Person p)
{
	p = s.pop();
	cout << p.getName() << " exited the Stack!" << endl;
	//Display Current Stack
}

void PushQueue(DynTempQueue<Person>& s, Person p)
{
	s.enqueue(p);
	cout << p.getName() << " entered the Queue!" << endl;
	//Display Current Stack

}

void PopQueue(DynTempQueue<Person>& s, Person p)
{
	p = s.dequeue();
	cout << p.getName() << " Left the Queue!" << endl;
	//Display Current Stack
}

