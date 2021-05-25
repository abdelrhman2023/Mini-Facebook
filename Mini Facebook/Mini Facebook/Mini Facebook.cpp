// Mini Facebook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
#include "ArrayList.h"
using namespace std;

int main()
{
	ArrayList<int> A;
	A.append(4);
	A.append(7);
	A.append(1);
	A.append(9);
	A.append(2);
	A.Display();
	//A.insertAt(5, 147);
	//A.deleteAt(1);
	//A.Display();
	cout << A.pop_back() << endl;
	cout << A.Capacity() << endl;
	A.Edit(1) = 88;
	A.Display();



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
