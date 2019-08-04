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

	Node* Head;
	Node* Current;

	void Add(Node* node);
	void Print();
};


