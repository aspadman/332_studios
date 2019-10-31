// Studio13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"
using namespace std;

int main(int argc, char* argv[])
{
	// dynamically allocate detector object

	detector d = detector();

	// use shared pointer
	//shared_ptr<detector> s = createAndInit(); // not sure why this error 


    
}

detector::detector() {
	a = 0; // initialize the nonstatic member with the value of the static member variable 
	++b; // increment the static member variable
	cout << "the method name is detector, the address is ...(not sure how to find address) and the value of a is" << a;
}

detector::~detector() {
	cout << "the method name is detector, the address is ...(not sure how to find address) and the value of a is" << a;
}