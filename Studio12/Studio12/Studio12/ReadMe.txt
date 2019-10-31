To get some output, I commented out the following line:

other object2 = other();

I see an error saying that the function other() is not accessible at line 21.. I am not sure why this is but
wanted to otherwise build the program and observe output for the studio12 object that I created. 

Output from part 1:

H:\332_Local_Repo\332_studios\Studio12\Studio12\Debug>Studio12.exe
The class name is studio12 and the method name is studio12.
The class name is studio12 and the method name is studio12.
The class name is other and the method name is other.
The class name is other and the method name is other.
The class name is studio12 and the method name is studio12.
The class name is studio12 and the method name is studio12.

This output makes sense because the constructor and deconstructor were called more than once per object. 

Output from reference calls:

H:\332_Local_Repo\332_studios\Studio12\Studio12\Debug>Studio12.exe
The class name is studio12 and the method name is studio12.
The class name is studio12 and the method name is studio12.
The class name is other and the method name is other.
reference 1 call to studio12
The class name is studio12 and the method name is studio12.
reference 2 call to studio12
The class name is studio12 and the method name is studio12.
reference 1 call to other
The class name is studio12 and the method name is studio12.
The class name is other and the method name is other.
The class name is other and the method name is other.The class name is studio12 and the method name is studio12.
The class name is studio12 and the method name is studio12.

I am not sure if this output is correct, but I think the reference 1 call to other should not say studio12 in output.



Output after virtual:

H:\332_Local_Repo\332_studios\Studio12\Studio12\Debug>Studio12.exe
The class name is studio12 and the method name is studio12.
The class name is studio12 and the method name is studio12.
The class name is other and the method name is other.
reference 1 call to studio12
The class name is studio12 and the method name is studio12.
reference 2 call to studio12
The class name is studio12 and the method name is studio12.
reference 1 call to other
The class name is studio12 and the method name is studio12.
The class name is other and the method name is other.
The class name is other and the method name is other.
The class name is studio12 and the method name is studio12.
The class name is studio12 and the method name is studio12.

If anything after virtual my output just increased.

Output after making the pointers:

H:\332_Local_Repo\332_studios\Studio12\Studio12\Debug>Studio12.exe
The class name is studio12 and the method name is studio12.
The class name is studio12 and the method name is studio12.
The class name is other and the method name is other.
reference 1 call to studio12
The class name is studio12 and the method name is studio12.
reference 2 call to studio12
The class name is studio12 and the method name is studio12.
reference 1 call to other
The class name is studio12 and the method name is studio12.
The class name is other and the method name is other.
The class name is other and the method name is other.
The class name is studio12 and the method name is studio12.
The class name is studio12 and the method name is studio12.

This is the output that I see after the deletion of the pointers. 


Answer to 6:

The behavior inside the function matches the original object being passed when we pass in a reference of
the object into the method. 

It will act as if it has been "sliced" down to being an object of the base class type in scenarios
where a reference is not passed. 