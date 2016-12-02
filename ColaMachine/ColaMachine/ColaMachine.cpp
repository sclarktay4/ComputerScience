/*
Cola Machine
Requires: variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
Then allow the user to choose a beverage by entering a number 1-5.
Output which beverage they chose.

★ If you program uses if statements instead of a switch statement, modify it to use a switch statement.
If instead your program uses a switch statement, modify it to use if/else-if statements.

★★ Modify the program so that if the user enters a choice other than 1-5 then it will output "Error. choice was not valid,
here is your money back."
*/

#include <iostream>

using namespace std;

int selection;

//This function is to present a list of selection options.
void Menu()
{
	cout << "Please select from the options:" << endl
		<< "1 - Coke" << endl
		<< "2 - Sprite" << endl
		<< "3 - Iced Tea" << endl
		<< "4 - Water" << endl
		<< "5 - Orange Pop" << endl;
		
}

//This function asks user to input their selection.
int InputSelection()
{
	//Asks user to enter a value between 1 and 5.
	cout << "Enter a value between 1 and 5." << endl;
	//User enters their selection.
	cin >> selection;
	//Output to skip a line.
	cout << endl;
	//Check to see if value is outside of the possible option.
	if ((selection < 1) || (selection > 5))
	{
		//Show that option is selected is outside of the options.
		cout << "Error. choice was not valid, here is your money back." << endl << endl;
		//Recall Menu fuction to present options again.
		Menu();
		//Recall InputSelection function to validate user input again.
		InputSelection();
	}	
	return(selection);
}

//This function accepts the user input to show what the user selected.
void Choice(int x)
{
	//Check to see if the input is between 1 and 5.
	if ((x >= 1) && (x <= 5))
	{
		//Switch to show the selection by the given input.
		switch (x)
		{
		case 1: cout << "You chose to have a Coke." << endl;
			break;
		case 2: cout << "You chose to have a Sprite." << endl;
			break;
		case 3: cout << "You chose to have an Iced Tea." << endl;
			break;
		case 4: cout << "You chose to have a Water." << endl;
			break;
		case 5: cout << "You chose to have an Orange Pop." << endl;
			break;	
		}	
	} 	
}




void main()
{
	Menu();
	InputSelection();
	Choice(selection);
	system("pause");
	return;
}