// Studio8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"
using namespace std;

//studio8::studio8(): x(0), y(0) {}
	

int main(int argc, char* argv[])
{
	//studio8 object{3, 4}; 
	//studio8 object = studio8();
	//cout << object.x << endl;
	//cout << object.y << endl;

	studio8 object = studio8(3, 4);

	cout << "original x: " << object.getX() << endl;
	cout << "original y: " << object.getY() << endl;

	object.setX(8);
	object.setY(9);

	cout << "new x: " << object.getX() << endl;
	cout << "new y: " << object.getY() << endl;

	////////////////////////////////////////////////

	const studio8 object2 = studio8(5, 6);

	cout << "original x: " << object2.getX() << endl;
	cout << "original y: " << object2.getY() << endl;

	//object2.setX(8);
	//object2.setY(9);


}

