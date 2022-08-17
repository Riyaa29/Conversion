# Conversion
This project Converts the values entered in kilograms to pounds and vice versa. It also gives out the minimum, maximum and the average of the entered values if 0 or a negative value is entered, for upto 15 values. 

Languages/tools/editors:
1.	Language : C++20 : ISO/IEC 14882:2020 (informally known as C++20)
2.	Tools : Codeblocks-20.03mingw-setup.exe
3.	Editor : Riya Nagpal

Algorithm(s):                                                                                                      

START
•	Global Variables : double weight[15], int i 
•	Declare function min_max() 
•	Local variables : int min, max,sum,count = 0, double avg = 0;
•	Assign value min, max = weight[0]
•	FOR(int j = 0; j < i; j++)
•	Increment count, sum+=weight[j]
•	IF weight[j] > max
•	THEN, max = weight[j]
•	IF weight[j] < min
•	THEN, min = weight[j]
•	END IF
•	ELSE IF weight[j] < min
•	THEN, min = weight[j]
•	END ELSE IF
•	END FOR
•	AVERAGE = SUM/COUNT
•	PRINT maximum and minimum values and the average of the values entered
•	END function min_max()
•	Declare function convert_pounds() 
•	FOR (i=0; i<15; i++)
•	Read weight
•	Write weight
•	IF (weight > 0)
•	THEN, Write 2.2046*weight (value in kilograms)
•	ELSE, call function min_max()
•	BREAK LOOP
•	END IF
•	END FOR
•	END function convert_pounds()
•	Declare function convert_kilograms() 
•	FOR (i=0; i<15; i++)
•	Read weight
•	Write weight
•	IF (weight > 0)
•	THEN, Write weight/2.2046 (value in pounds)
•	ELSE, call function min_max()
•	BREAK LOOP
•	END IF
•	END FOR
•	END function convert_kilograms()
•	Declare MAIN ()
•	PRINT name and information 
•	Local variables : int option
•	DO
•	Print Menu
•	Read option
•	Write option
•	SWITCH(option)
•	Case 1: Call convert_pounds()
•	Case 2: Call convert_kilograms()
•	END SWITCH
•	WHILE option != 0
•	END DO-WHILE
END

The functions (prototypes) and their description:

1.	void min_max();	The function contains algorithm to find out the minimum, maximum and average of the entered values in weight(kilograms/pound).
2.	void convert_pounds();	This function asks the user to input the value in pounds and converts it into kilograms and returns to the user.
3.	void convert_kilograms();	This function asks the user to input the value in kilograms and converts it into pounds and returns to the user.

 
 
 
 
 

 

 
