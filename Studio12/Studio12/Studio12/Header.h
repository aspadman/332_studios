#pragma once

class studio12 {
public:
	studio12(); // default constructor
	~studio12(); // public destructor
	virtual void another();

};

class other : public studio12 {
public:
	other();
	~other();
	virtual void another2();

};