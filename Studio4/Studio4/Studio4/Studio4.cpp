// Studio4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <ostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[])
{
	//unsigned int arr[2][3][5] = { 0 };

	//for (int i = 0; i < 2; i++) {
		//for (int j = 0; j < 3; j++) {
			//for (int k = 0; k < 5; k++) {
				//arr[i][j][k] = i * j * k;
				//cout << i << " ," << j << " ," << k << " Value: " << arr[i][j][k] << endl;
			//}
		//}
	//}

	if (argc == 3) {
		for (int i = 0; i < argc; i++) {
			cout << argv[i] << endl;
		}
		return 0;
	}

	else {
			cout << "usage: " << argv[0] << " arg1 " << " arg2 ";
			return -1;
		}
	

	vector<string> vect;

	//for (int i = 0; i < argc; i++) {
		//vect.push_back(argv[i]);
	//}

	//for (int i = 0; i < vect.size(); i++) {
		//cout << vect[i] << endl;
	//}

	// changing the format of a program 

	string s = "";

	for (int i = 0; i < argc; i++) {
		s = s + (argv[i]) + " ";
	}

	istringstream iss(s);
	string a;

	while (iss >> a) {
		cout << a << endl;
	}


	// the part about only accepting two command line arguments (in addition to the program name)

	
	
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
