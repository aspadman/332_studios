// Studio5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void mySwap(int& a, int& b);

int main(int argc, char* argv[])
{
	int num1 = 0;
	int num2 = 1;

	int* p1 = &num1;
	int* p2 = &num2;

	//mySwap(num1, num2);
	//cout << num1 << endl << num2;

	// change call 
	mySwap(*p1, *p2);
	cout << num1 << endl << num2;

	int* const c = num1;
	int* const c2 = num2;

	mySwap(c, c2);
	// this is supposed to call the third mySwap method 

}

void mySwap(int& a, int& b) {
	int temp = a;
	temp = a;
	a = b;
	b = temp;
	cout << "mySwap version 1" << endl;

}

void mySwap(int*& a, int*& b) {
	int* temp = a;
	a = b;
	b = temp;
	cout << "mySwap version 2" << endl;
}

void mySwap(int* const& a, int* const& b) {
	int *const&temp = a;
	a = b;
	b = temp;
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
