// Studio3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int main(int argc, char * argv[])
{
	cout << argv[0];
	
	for (const char* p = *argv; *p != '/0'; p++) {
		cout << *p << endl;
	}

	// repeat the above with a reference instead of a pointer

	//for (const char &p2 = *argv; &p2 != '/0'; p2++) {
		//cout << &p2 << endl;
	//}

	// repeat exercise using the auto keyword

	for (auto p = *argv; *p != '/0'; p++) {
		cout << *p << endl;
	}


	// trying to iterate through each of the strings in argv	// use two for loops

for (int i = 0; i < argc; ++i) {
	for (const char* p = *argv[i]; *p != '/0'; p++) {
		cout << *p << endl;
	}
}
	

}

