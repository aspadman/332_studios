Class declaration as the answer to 2:

class Student {
private:
	string name;
	unsigned int ID;
};


I have tried in step 2 to use the std::copy algorithm to print out the contents in my vector, but upon
compiling I run into this error:

Severity	Code	Description	Project	File	Line	Suppression State
Error	C2679	 binary '=': no operator found which takes a right-hand operand of type 'Student' (or there is no acceptable conversion)	Studio11	C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\VC\Tools\MSVC\14.22.27905\include\xutility	1768	

I am really not sure what this means. I tried googling the error to find a way to fix this and came to the 
following page:  https://stackoverflow.com/questions/1631338/error-c2679-binary-no-operator-found-which-takes-a-right-hand-operand-of

I have all of the correct things included though so I am not sure how to fix it.

It seems that the std::copy method needs to be overloaded in order to support this printing of the contents.

I did the following to sort the vector of Student objects but can't see my output bc I am not sure how to 
solve the problem detailed above..

std::sort(studs.begin(), studs.end());

I think that in order to accomplish these things we need to make the instance variables of the Student
class public, so I have made this modification in the Student class. 

I tried to use the concepts used earlier to use an ifstream to get data line by line from an input file, 
and then push this data line by line into the vector, but due to the binary problem error upon compilation
as well as an incomplete type error I cannot see any output. 

I googled the incomplete type error sdand came here alkfsdf came here: https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.4.0/com.ibm.zos.v2r4.cbclx01/cplr060.htm#targetText=Incomplete%20class%20declarations%20(C%2B%2B%20only),until%20the%20declaration%20is%20complete.