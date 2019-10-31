// Studio10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <iterator>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
	multiset<string> m;
	set<string> s;
	map<string, int> map;

	// use std::copy() to populate multiset with the command line arguments

	// create the insert iterator
	std::multiset<string>::iterator iter;

	//create set iterator

	std::set<string>::iterator iter2;

	std::copy(argv, argv + argc, iter = m.begin());

	//for (iter = m.begin(); iter != m.end(); ++iter)
		//std::cout << ' ' << *iter;

	std::ostream_iterator< string > output(cout, " ");
	std::copy(m.begin(), m.end(), output);


	// create a variable of type set<string>
	//std::copy(m, m.size(), iter2 = s.begin()); // I am not sure what I am doing wrong here...
	
	//std::copy(m, m + m.size(), iter2 = s.begin()); // another thing I tried but it doesn't work

	std::copy(iter = m.begin(), iter = m.end(), iter2 = s.begin());


	// Iterate over the set from 2.2

	// I will assume for this part that I was able to succesfully populate the set

	int count = 0;

	for (iter2 = s.begin(); iter2 != s.end(); iter2++) {
		//map<string, int> map;
		count = std::count(iter = m.begin(), iter = m.end(), iter2);
		//map.insert(iter2, count);
		map.insert(std::pair<string, int>(iter2, count));
	}

	// now iterate over the map and print out the output:
	std::map<string, int>::iterator iter3;

	for (iter3 = map.begin(); iter3 != map.end(); iter3++) {
		std::cout << iter3->first << " occurred " << iter3->second << "times" << endl;
	}

	// now copy to a file using output file stream

	ofstream output_file;
	
	if (output_file.is_open()) {
		for (iter3 = map.begin(); iter3 != map.end(); iter3++) {
			output_file << iter3->first << " occurred " << iter3->second << "times" << endl;
		}
	}
}