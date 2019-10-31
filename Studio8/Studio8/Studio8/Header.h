#pragma once

//struct studio8 {
	//int x;
	//int y;

	//studio8();
//};

// changing the class declaration per step 4:

class studio8 {
public:
	studio8(int a, int b);
	int getX() const;
	int getY() const;
	studio8 setX(int a);
	studio8 setY(int b);
private:
	int x;
	int y;
};

studio8::studio8(int a, int b):x(a), y(b) {}


	int studio8::getX() const {
		return (*this).x;
	}

	int studio8::getY() const {
		return (*this).y;
	}

	 studio8 studio8::setX(int a) {
		(*this).x = a;
		return (*this);
	}

	 studio8 studio8::setY(int b) {
		 (*this).y = b;
		 return (*this);
	 }

