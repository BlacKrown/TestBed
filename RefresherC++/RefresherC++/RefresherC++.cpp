// RefresherC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "LinkedList.h"

int main()
{
    std::cout << "Hello World!\n"; 

	LinkedList ll;
	Node n;
	n.Data = 4;
	ll.Add(&n);

	for (int i = 0; i < 5; i++)
	{
		Node n;
		n.Data = rand() % 100;
		ll.Add(&n);
	}

	ll.Print();


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