Output that the program produced after step 1:

x
W
W

ü


U
s
e
r
s
\
V

For some reason, my output looks very weird. Not sure why. I think printing out argv[0] should just give me
studio3.exe, but I guess not. 

In position 0 of the argV vector it should always be the exectuable file (i.e. the program name).

For some weird reason, my program does not give me any output from the for loop that I wrote to do step 2. 
Here is my code that I wrote for step2:

for (const char* p = *argv; *p != '/0'; p++) {
		cout << *p << endl;
	}

I tried to repeat the same exercise with a reference, but I do not think that the code is right:

for (const char &p2 = *argv; &p2 != '/0'; p2++) {
		cout << &p2 << endl;
	}

3 ways that references differ from pointers in c++:

1. references are aliases of an object, whereas pointers point to the address that holds an object
2. references must be initialized to something, while pointers can be null (zero)
3. references are a more direct form of accessing an object and offer clearner syntax than a pointer

Though, of the three differences listed above, I am not sure which one explains why my syntax is 
incorrect for a reference as I have it written in the cpp file and just above this paragraph. 

My code for the portion with auto:
	for (auto p = *argv; *p != '/0'; p++) {
		cout << *p << endl;
	}

Output after commenting out the for loop with references:

My output is exactly the same as above (which is why I am not listing it again here). I keep getting this
gibberish and for some reason my for loops are not working as intended I think. I am not sure if the auto 
keyword makes much difference from the process used in step 3. 

Question 6:

to do this, I will likely need another for loop. One of my for loops will iterate through each of the strings
present in argv, and then the inner for loop will iterate through each of the characters in each of these strings. 

Here is my code for this part:

for (int i = 0; i < argc; ++i) {
	for (const char* p = *argv[i]; *p != '/0'; p++) {
		cout << *p << endl;
	}
}

I used several pointer operations including pointer dereferencing and pointer comparions and pointer 
pre-incrementing. 


