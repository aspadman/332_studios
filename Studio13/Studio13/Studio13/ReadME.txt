When creating the detector class, 

I ran into an error with the static unsigned int..

Answer to question 2:

code for the class that I declared and defined:

#pragma once
// define a detector class

class detector {
private:
	unsigned int a;
	static unsigned int b; 
	//static unsigned int b = 0; // commented out but not sure why the error 
	detector(); // default cstr
	~detector(); // destructor
};

I tried to make my shared pointer:
shared_ptr<detector> s = createAndInit(); 

but it says that createAndInit is undefined. I tried to follow the format from the slides and even 
googled this problem, but could not find a solution. 

Answer to question 3:

When the shared_ptr goes out of scope, it is deleted and thus the detector object is also deleted.
We have no way of referencing/accessing it. 

Answer to question 4:

Because I cannot get my shared_pointer initialized correctlly, I am answering questino 4 to the best of 
my knowledge here. 

A. I think that the shared_ptr that is responsbile for pointing to the detector object 
will ultimately be the one that will destroy the object. 

B. I think that the object will be destroyed once the main method returns. 

C. The object should only be deleted one time, once again after the main method returns. 

D. I do not think that there should be any aliases that remain after the object is destroyed
because if there were than this could cause a memory leak problem if we try to refer to an object
that has already been destroyed. 

// Again because of my problems with the shared pointer, I am answering here for 5 to the best of my knowledge. 

Answer to number 5:

a. I cannot know for sure since I could not succesfuly write the code for this part, 
but I think that this would result in more detector objects being destroyed since there are now 
more shared_ptr variables pointing to detector objects. 

b. answered with reasoning in a. 

Question 6:
I do not have the output, but if I had to guess, I would say that the same objects are indeed being
aliased by the two different sets of shared_pointers. 

Question 7:
When you explicitly call delete on the pointers to the detector objects, all the contents of the objects 
are deleted. The vector cleans up all the memory that was related to the detector objects, but does not 
clean up anything else. 