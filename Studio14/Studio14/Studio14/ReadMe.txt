For some reason I am getting the following error:

Severity	Code	Description	Project	File	Line	Suppression State
Error	LNK2001	unresolved external symbol "private: static unsigned int detector::b" (?b@detector@@0IA)	Studio14	H:\332_Local_Repo\332_studios\Studio14\Studio14\Studio14\Studio14.obj	1	

Answer to question 2:

1. Since I only created one object of the wrapper class, I imagine only one object is created. 
2. Since I only created one object of the wrapper class, I imagine only one object is destroyed.

Question 3:
I have some problems with my code that does not allow me to see the output, but I will answer q3
as well as possible. 

1. I think that in this version more than one object has been created and destroyed.
2. The differences between this one and the previous exercise is that here I am also making use of the 
wrapper class which we have defined to be distinguishable and thus different from the detector class. This 
will increase the number of total objects. 

Question 4:
When making a destructor that deletes the pointer p, I believe that now everything is the same as in the prev
excercise except that now we have an additional object that is deleted. 

Question 5:

1. After adding the boolean variable as a member of the wrapper class, and deleting only when it is true:
I think that we will see even more detector objects that are created and destroyed. 

2. I do not see any major problems with allocation/deallocation with this scheme,

and 3. the wrapper deconstructor is responsible for destroying detector objects while the wrapper
constructor is responsible for creating detector objects. 

Question 6:
I could not figure out exactly how to make the copy constructor work, but I would say again that 
we will have more objects deleted and created with the copy constructor because the constructor is making 
more objects (in the case of shallow it is using the current object and in deep it makes a separate object) that
have the potential to be created/deleted. 