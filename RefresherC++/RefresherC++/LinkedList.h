#pragma once
#include <iostream>

using namespace std;

struct Node
{
	Node* Next;
	int Data;
};

class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	void Add(Node* node);
	void Print();

private:
	Node* Head;
	Node* Current;

	int count;
};


