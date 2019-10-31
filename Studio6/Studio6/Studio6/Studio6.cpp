// Studio6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <stdexcept> 
using namespace std;

int squareElement(vector<int> v, unsigned int a);
int main(int argc, char* argv[])
{
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	try {
		cout << squareElement(v, 3);
	}

	catch (const std::out_of_range& out_bounds) {
		cout << "The index was out of bounds.";
	}
	
   // finish this part with the catch statements 
}

int squareElement(vector<int> v, unsigned int a) {
	return (v[a] * v[a]);
}

int divideElement(vector<int> v, unsigned int a, unsigned int b) {
	return squareElement(v, a) / squareElement(v, b);
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
