#include"iostream"
#include"conio.h"
using namespace  std;



class node//struct
{
	int data;
	node *nextnodeptr;
public:

	node(int data)
	{
		this->data = data;
		nextnodeptr = NULL;
	}
	node *getNextNodeptr()
	{
		return nextnodeptr;
	}
	void  setNextNodeptr(node *nextnodeptr)
	{
		this->nextnodeptr = nextnodeptr;
	}
	int getData()
	{
		return data;
	}
	void setData(int data)
	{
		this->data = data;
	}

};



class linkedList
{
	node *header;
public:
	linkedList()
	{
		header = NULL;
	}
	void insertionAtTail(node *n)
	{
		if (header == NULL)
		{
			header = n;
		}
		else
		{
			node *rptr = header;
			while (rptr->getNextNodeptr() != NULL)
			{
				rptr = rptr->getNextNodeptr();
			}
			rptr->setNextNodeptr(n);
		}

	}
	void display()
	{
		node *rptr = header;
		while (rptr->getNextNodeptr() != NULL)
		{
			cout << rptr->getData() << endl;
			rptr = rptr->getNextNodeptr();
		}
		cout << rptr->getData() << endl;
	}

};




void main()
{
	linkedList L1;
	L1.insertionAtTail(new node(2));
	L1.insertionAtTail(new node(6));
	L1.insertionAtTail(new node(8));
	L1.insertionAtTail(new node(9));
	L1.insertionAtTail(new node(5));
	L1.insertionAtTail(new node(4));
	L1.insertionAtTail(new node(3));
	L1.display();
	_getch();
}