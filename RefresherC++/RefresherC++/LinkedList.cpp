#include "pch.h"
#include "LinkedList.h"



LinkedList::LinkedList()
{
	Head = NULL;
	Current = NULL;
	count = 0;
}


LinkedList::~LinkedList()
{
	//delete all nodes in the list
	if (Head != NULL)
	{
		Current = Head;

		while (Current)
		{
			Node* temp = Current;
			Current = Current->Next;
			delete temp;
		}
	}
		
}

void LinkedList::Add(Node* node)
{
	count++;

	if (Head == NULL)
	{
		Head = node;
		Head->Next = NULL;
		return;
	}
	else
	{
		Current = Head;

		while (Current->Next != NULL)
		{
			Current = Current->Next;
		}

		Current->Next = node;
	}
}

void LinkedList::Print()
{
	if (Head != NULL)
	{
		Current = Head;

		while (Current != NULL)
		{
			cout << Current->Data << ", ";
			Current = Current->Next;
		}
	}

}