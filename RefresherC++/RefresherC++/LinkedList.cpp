#include "pch.h"
#include "LinkedList.h"



LinkedList::LinkedList()
{
	Head = NULL;
}


LinkedList::~LinkedList()
{
	//TODO:  delete all node in the list
	if (Head != NULL)
		delete Head;
}

void LinkedList::Add(Node* node)
{
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

		while (Current)
		{
			cout << Current->Data;
			Current = Current->Next;
		}
	}

}