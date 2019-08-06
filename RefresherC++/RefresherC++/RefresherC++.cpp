// RefresherC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>
#include <vector>

#include "LinkedList.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n"; 

	LinkedList ll;
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 5; i++)
	{
		Node* n = new Node;
		n->Data = rand() % 100;
		n->Next = NULL;
		ll.Add(n);
	}

	ll.Print();


	vector<int>* list = new vector<int>;
	vector<int>::iterator itr;

	list->push_back(15);
	list->push_back(24);
	list->push_back(73);
	list->push_back(65);

	cout << "\niterator loop\n";

	for (itr = list->begin(); itr != list->end(); itr++)
	{
		cout << *itr << ' ';
	}







}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
