// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>


using namespace std;


int main()
{
    cout << "Hello World!\n"; 

	vector<string> vecString = { "whaaat","is","happening","in","here" };

	for (string s : vecString) {
		if (s != "is") {
			cout << s << endl;
		}
	}

	int ints[5] = { 1,2,3,4,5 };

	for (int i : ints) {
		cout << i << endl;
	}

	cout << endl;

	cout << sizeof(ints) << endl;

	cout << sizeof(*ints) << endl;

	cout << endl;

	for (int i = 0; i < sizeof(ints) / sizeof(*ints); i++) {
		cout << ints[i];
	}

	cout << endl;

	cout << "vector ints is located in memory in this location: " << &ints << endl;
	
	cout << endl;

	string s = "";
	
	cin >> s;

	cout << s;

	return 0;
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
