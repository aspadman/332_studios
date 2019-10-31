#pragma once
// define a detector class

class detector {
private:
	unsigned int a;
	static unsigned int b;
	//static unsigned int b = 0; // commented out but not sure why the error 
public:
	detector(); // default cstr
	~detector(); // destructor
};

// create new wrapper class

class wrapper {
private:
	//detector obj; 
	// now change the member variable to being a pointer 
	detector obj;
	detector* p = obj;
	bool b; 
public:
	wrapper();
	wrapper(int size); // copy constructor 
	~wrapper();
};