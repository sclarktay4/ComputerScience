/*
Bracketing Search
Requires: variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)
loops (for, while, do-while)
psudo random numbers

Write a program that calculates a random number 1 through 100. The program then asks the user to guess the number.
If the user guesses too high or too low then the program should output "too high" or "too low" accordingly.
The program must let the user continue to guess until the user correctly guesses the number.

★ Modify the program to output how many guesses it took the user to correctly guess the right number.

★★ Modify the program so that instead of the user guessing a number the computer came up with, the computer guesses the number 
that the user has secretely decided. The user must tell the computer whether it guesed too high or too low.

★★★★ Modify the program so that no matter what number the user thinks of (1-100) the computer can guess it in 7 or less guesses.
*/

#include <iostream>
#include <ctime>

using namespace std;

int number, guess;
int countAmount = 0;
int min = 1;
int max = 100;
char highlow;

//Function to have the user enter the value the computer will guess.
void numberPick()
{
	cout << "Please enter your secret number between 1 and 100." << endl;
	//Input user selected data.
	cin >> number;
	cout << endl;
}

//Function to have the computer generate a random number for its guess.
void random()
{
	//User system time to help generate a random number.
	srand((unsigned int)time(NULL));
	//Generate a number between mininum and maximum variables.
	guess = rand() % (max - min + 1) + min;
	//Output computers guess
	cout << "Computer's guess:" << endl;
	cout << guess;
	cout << endl;
	
}

//Function to compare user entered number to the computer generated number.
void calculate()
{
	//Loop as long as the user entered number and the computer generated number are not the same.
	while (guess != number)
	{
		//Ask user it the computer generated number is too high or to low compare to the user entered number.
		cout << "Is the computer guessed number too high or too low: h / l ." << endl;
		//Let computer know if the generated value is too high or too low.
		cin >> highlow;
		//Loop if user says the computer generated number is too high.
		if (highlow == 'h')
		{
			//Change maximum value to the computer generated number.
			max = guess; 
			//Recall random function.	
			random();
		}
		//Loop if user says the computer generated number is too low.
		if (highlow == 'l')
		{
			//Change minimum value to the computer generated number.
			min = guess;
			//Recall random function.
			random();
		}		
	}
	//Output that user entered number and computer generated number are the same.
	cout << "Congratulations! You guessed the correct number." << endl;	
}


void main()
{
	numberPick();
	random();
	calculate();
	system("pause");
	return;

}


