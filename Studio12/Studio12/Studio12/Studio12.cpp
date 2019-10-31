// Studio12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"
using namespace std;

int main(int argc, char* argv[])
{
	studio12 object1 = studio12();
	other object2 = other(); 

	studio12 &r = object1;
	studio12 &r2 = object1;
	other& r3 = object2;

	studio12 *p = &r;
	studio12 *p2 = &r2;
	other *p3 = &r3;

	cout << "reference 1 call to studio12" << endl;
	r.studio12::studio12();

	cout << "reference 2 call to studio12" << endl;
	r2.studio12::studio12();

	cout << "reference 1 call to other" << endl;
	r3.other::other();

	// declarations of object bae type 
	studio12 object4;
	other object5;
	studio12 *p4 = new studio12(); 
	other* p5 = new other();
	delete p4;
	delete p5;





}

studio12::studio12() {
	cout << "The class name is studio12 and the method name is studio12.";
}

studio12::~studio12() {
	cout << "The class name is studio12 and the method name is studio12.";
}

other::other() {
	cout << "The class name is other and the method name is other.";
}

other::~other() {
	cout << "The class name is other and the method name is other.";
}

void studio12::another() {
	cout << "This method belongs to the studio12 class." << endl;
}

void other::another2() {
	cout << "This method belongs to the other class." << endl;
}