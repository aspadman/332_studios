// Studio9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <forward_list>
#include <list>
#include <deque>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	vector<int> v;
	forward_list<int> f;
	list<int> l;
	deque<int> d;

	//populate each one with 1, 2, 3

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	f.push_front(3);
	f.push_front(2);
	f.push_front(1);

	l.push_back(1);
	l.push_back(2);
	l.push_back(3);

	d.push_back(1);
	d.push_back(2);
	d.push_back(3);

	// iterate through each and use cout to print contents

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	forward_list<int>::iterator iter;

	for (iter = f.begin(); iter != f.end(); iter++) {
		cout << *iter << endl;
	}

	list<int>::iterator iter2;

	for (iter2 = l.begin(); iter2 != l.end(); iter2++) {
		cout << *iter2 << endl;
	}

	deque<int>::iterator iter3;

	for (iter3 = d.begin(); iter3 != d.end(); iter3++) {
		cout << *iter3 << endl;
	}


	std::sort(v.begin(), v.end());
	std::sort(d.begin(), d.end());

	vector<int>::iterator iter4;

	for (iter4 = v.begin(); iter4 != v.end(); iter4++) {
		cout << *iter4 << endl;
	}

	deque<int>::iterator iter5;

	for (iter5 = d.begin(); iter5 != d.end(); iter5++) {
		cout << *iter5 << endl;
	}

	std::reverse(v.begin(), v.end());
	std::reverse(d.begin(), d.end());
	std::reverse(l.begin(), l.end());


	vector<int>::iterator iter6;

	for (iter6 = v.begin(); iter6 != v.end(); iter6++) {
		cout << *iter6 << endl;
	}

	deque<int>::iterator iter7;

	for (iter7 = d.begin(); iter7 != d.end(); iter7++) {
		cout << *iter7 << endl;
	}

	list<int>::iterator iter8;

	for (iter8 = l.begin(); iter8 != l.end(); iter8++) {
		cout << *iter8 << endl;
	}




	//std::sort(l.begin(), l.end());
	//std::sort(f.begin(), f.end());
	
	
}
