// data_structures_lab_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
//#include "SortingTests.h"
#include "LinkedBag.h"//<Linked>
int main()
{
//	SortingTests tests;
//	tests.sortingExperiments(10000);
	//So
	LinkedBag<std::string> bag;
	bag.add("a");
	bag.add("b");
	bag.add("a");
	bag.remove();
	//bag.add("a");
	bag.show_bag();
    std::cout << "Hello World!\n";
    bag.duplicateAll();
    bag.show_bag();
    
    bag.removeDuplicates();
	    bag.show_bag();
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
