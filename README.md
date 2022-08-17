# Conversion
This project Converts the values entered in kilograms to pounds and vice versa. It also gives out the minimum, maximum and the average of the entered values if 0 or a negative value is entered, for upto 15 values. 

Languages/tools/editors:
1.	Language : C++20 : ISO/IEC 14882:2020 (informally known as C++20)
2.	Tools : Codeblocks-20.03mingw-setup.exe
3.	Editor : Riya Nagpal

Algorithm(s):                                                                                                      

START
1.	Global Variables : double weight[15], int i 
2.	Declare function min_max() 
3.	Local variables : int min, max,sum,count = 0, double avg = 0;
4.	Assign value min, max = weight[0]
5.	FOR(int j = 0; j < i; j++)
6.	Increment count, sum+=weight[j]
7.	IF weight[j] > max
8.	THEN, max = weight[j]
9.	IF weight[j] < min
10.	THEN, min = weight[j]
11.	END IF
12.	ELSE IF weight[j] < min
13.	THEN, min = weight[j]
14.	END ELSE IF
15.	END FOR
16.	AVERAGE = SUM/COUNT
17.	PRINT maximum and minimum values and the average of the values entered
18.	END function min_max()
19.	Declare function convert_pounds() 
20.	FOR (i=0; i<15; i++)
21.	Read weight
22.	Write weight
23.	IF (weight > 0)
24.	THEN, Write 2.2046*weight (value in kilograms)
25.	ELSE, call function min_max()
26.	BREAK LOOP
27.	END IF
28.	END FOR
29.	END function convert_pounds()
30.	Declare function convert_kilograms() 
31.	FOR (i=0; i<15; i++)
32.	Read weight
33.	Write weight
34.	IF (weight > 0)
35.	THEN, Write weight/2.2046 (value in pounds)
36.	ELSE, call function min_max()
37.	BREAK LOOP
38.	END IF
39.	END FOR
40.	END function convert_kilograms()
41.	Declare MAIN ()
42.	PRINT name and information 
43.	Local variables : int option
44.	DO
45.	Print Menu
46.	Read option
47.	Write option
48.	SWITCH(option)
49.	Case 1: Call convert_pounds()
50.	Case 2: Call convert_kilograms()
51.	END SWITCH
52.	WHILE option != 0
53.	END DO-WHILE

END

The functions (prototypes) and their description:

1.	void min_max();	The function contains algorithm to find out the minimum, maximum and average of the entered values in weight(kilograms/pound).
2.	void convert_pounds();	This function asks the user to input the value in pounds and converts it into kilograms and returns to the user.
3.	void convert_kilograms();	This function asks the user to input the value in kilograms and converts it into pounds and returns to the user.

 
 
 
 
 

 

 
