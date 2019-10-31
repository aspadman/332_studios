Output from the first part:


H:\332_Local_Repo\332_studios\Studio4\Studio4\Debug>Studio4.exe
0 ,0 ,0 Value: 0
0 ,0 ,1 Value: 0
0 ,0 ,2 Value: 0
0 ,0 ,3 Value: 0
0 ,0 ,4 Value: 0
0 ,1 ,0 Value: 0
0 ,1 ,1 Value: 0
0 ,1 ,2 Value: 0
0 ,1 ,3 Value: 0
0 ,1 ,4 Value: 0
0 ,2 ,0 Value: 0
0 ,2 ,1 Value: 0
0 ,2 ,2 Value: 0
0 ,2 ,3 Value: 0
0 ,2 ,4 Value: 0
1 ,0 ,0 Value: 0
1 ,0 ,1 Value: 0
1 ,0 ,2 Value: 0
1 ,0 ,3 Value: 0
1 ,0 ,4 Value: 0
1 ,1 ,0 Value: 0
1 ,1 ,1 Value: 1
1 ,1 ,2 Value: 2
1 ,1 ,3 Value: 3
1 ,1 ,4 Value: 4
1 ,2 ,0 Value: 0
1 ,2 ,1 Value: 2
1 ,2 ,2 Value: 4
1 ,2 ,3 Value: 6
1 ,2 ,4 Value: 8


Output from the second part:

Studio4.exe
Akshay
Joe
Jim

Yes, all of the command line arguments are present. 

When using the istring stream, I get the same output:

Studio4.exe
Akshay
Joe
Jim


With three arguments:

H:\332_Local_Repo\332_studios\Studio4\Studio4\Debug>Studio4.exe Akshay Joe Jim
usage: Studio4.exe arg1  arg2
H:\332_Local_Repo\332_studios\Studio4\Studio4\Debug>echo %errorlevel%
-1

With one argument:

H:\332_Local_Repo\332_studios\Studio4\Studio4\Debug>Studio4.exe Akshay
usage: Studio4.exe arg1  arg2
H:\332_Local_Repo\332_studios\Studio4\Studio4\Debug>echo %errorlevel%
-1

With two arguments:

H:\332_Local_Repo\332_studios\Studio4\Studio4\Debug>Studio4.exe Akshay Joe
Studio4.exe
Akshay
Joe

H:\332_Local_Repo\332_studios\Studio4\Studio4\Debug>echo %errorlevel%
0




