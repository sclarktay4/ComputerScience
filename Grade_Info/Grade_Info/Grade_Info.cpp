/*
Grading Program
Requires: variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that allows the user to enter the grade scored in a programming class (0-100).
If the user scored a 100 then notify the user that they got a perfect score.

★ Modify the program so that if the user scored a 90-100 it informs the user that they scored an A

★★ Modify the program so that it will notify the user of their letter grade
0-59 F 60-69 D 70-79 C 80-89 B 90-100 A
*/

#include <iostream>

using namespace std;

int Grade;

//This function is passed the user input and compared with the possible outputs.
void GradeCheck(int x)
{
	//Checks to see if the input was 100.
	if (x == 100)
	{
		cout << "Congratulations! You got a perfect score." << endl;
	}
	//Checks to see if the input is between 99 and 90.
	else if ((x < 100) && (x >= 90))
	{
		cout << "You have scored an A!" << endl;
	}
	//Checks to see if the input is between 89 and 80.
	else if ((x <= 89) && (x >= 80))
	{
		cout << "You have scored a B!" << endl;
	}
	//Checks to see if the input is between 79 and 70.
	else if ((x <= 79) && (x >= 70))
	{
		cout << "You have scored a C!" << endl;
	}
	//Checks to see if the input is between 69 and 60.
	else if ((x <= 69) && (x >= 60))
	{
		cout << "You have scored a D!" << endl;
	}
	//Checks to see if the input is between 59 and 0.
	else if (x <= 58)
	{
		cout << "You have scored a F!" << endl;
	}
}

void main()
{
	cout << "Enter in your grade." << endl;
	//Asks user to input the grade.
	cin >> Grade;
	GradeCheck(Grade);
	return;
}