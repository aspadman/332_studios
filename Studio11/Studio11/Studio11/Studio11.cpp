// Studio11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Students.h"
#include <vector>
#include <iterator>
#include <string>
#include <fstream>
#include <istream>
#include <algorithm>

using namespace std;



int main(int argc, char* argv[])
{
   // create several variables of type Student 

	Student a;
	Student b;
	Student c;

	vector<Student> studs;
	
	studs.push_back(a);
	studs.push_back(b);
	studs.push_back(c);

	// iterate over the vector and print out the contents:

	for (int i = 0; i < studs.size(); i++) {
		std::copy(studs.begin(), studs.end(), std::ostream_iterator<char>(std::cout, " "));
	}

	// sort the vector
	std::sort(studs.begin(), studs.end());

	// populate a vetor by opening a .txt file via an ifstream (that I assume will be passed via cmd line)
	
	ifstream ifs;
	ifs.open(argv[1]);

	//extract data
	string line; 
	
	while (getline(ifs, line)) {
		istringstream iss(line);
		studs.push_back(line);
}
	// sort and print out the contents 

	std::sort(studs.begin(), studs.end());

	for (int i = 0; i < studs.size(); i++) {
		std::copy(studs.begin(), studs.end(), std::ostream_iterator<char>(std::cout, " "));
	}