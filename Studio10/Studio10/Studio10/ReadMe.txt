I was able to make an insert iterator for the multiset, but then I was a little bit unsure of how to copy the 
command line argument elements over.

I tried to use the ostream operator and std:: copy to print out the contents of the multiset but I am 
not sure how to solve this error when I compile:

Severity	Code	Description	Project	File	Line	Suppression State
Error	C2678	 binary '=': no operator found which takes a left-hand operand of type 'const std::basic_string<char,std::char_traits<char>,std::allocator<char>>' (or there is no acceptable conversion)	Studio10	C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\VC\Tools\MSVC\14.22.27905\include\xutility	1768	

I tried changing the arguments of the call to argv[0], argv[argc] but this did not fix the problem. 

I cannot see the output for either the set or the multiset, so I am not entirely sure that difference between
the two are. Based on some quick research, it seems that sets must have unique keys, whereas multisets 
can contain duplicate keys. I am guessing that this plays a role in the insertion process. 

In this studio, I was not able to get any relevant output because I had the compile error which I did not 
know the solution too. I also could not understand why I have an error with inserting into the map the 
pair of string and int values. 

Update:

I solved many problems but end up with the following errors:

Severity	Code	Description	Project	File	Line	Suppression State
Error (active)	E0289	no instance of constructor "std::pair<_Ty1, _Ty2>::pair [with _Ty1=std::string, _Ty2=int]" matches the argument list	Studio10	H:\332_Local_Repo\332_studios\Studio10\Studio10\Studio10\Studio10.cpp	54	

Severity	Code	Description	Project	File	Line	Suppression State
Error	C2440	 '<function-style-cast>': cannot convert from 'initializer list' to 'std::pair<std::string,int>'	Studio10	H:\332_Local_Repo\332_studios\Studio10\Studio10\Studio10\Studio10.cpp	54	


