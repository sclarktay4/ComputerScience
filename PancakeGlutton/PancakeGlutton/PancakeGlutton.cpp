/*
Pancake Glutton
Requires: variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)
loops (for, while, do-while)
arrays

Write a program that asks the user to enter the number of pancakes eaten for breakfast by 10 different people (Person 1, Person 2, ..., Person 10)
Once the data has been entered the program must analyze the data and output which person ate the most pancakes for breakfast.

★ Modify the program so that it also outputs which person ate the least number of pancakes for breakfast.

★★★★ Modify the program so that it outputs a list in order of number of pancakes eaten of all 10 people.
i.e.
Person 4: ate 10 pancakes
Person 3: ate 7 pancakes
Person 8: ate 4 pancakes
...
Person 5: ate 0 pancakes
*/

#include <iostream>


using namespace std;

int inputarr[5];
int outputarr[5];
int temp1, temp2;

//Function to take in user input and store in both arrays.
void Input()
{
	//Loop to fill up array with user input data.
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the number of pancakes eaten for Person " << i + 1 << "." << endl;
		//User inputs data.
		cin >> inputarr[i];
		//Store numbers into array.
		outputarr[i] =  i + 1;
	}

}
//Function to sort the values entered from greatest to least in array.
void Calculate()
{
	//Start at beginning of array for comparison.
	for (int i = 0; i < 5; i++)
	{ 
		//Start at set start point to compare.
		for (int j = i; j < 5; j++)
		{
			//Verify that value 1 is less that value 2.
			if (inputarr[i] < inputarr[j])
			{
				//Put value of first array into temporary variable.
				temp1 = inputarr[j];
				//Put value of second array into temporary varialbe.
				temp2 = outputarr[j];
				//Swap values in first array.
				inputarr[j] = inputarr[i];
				//Swap values in second array.
				outputarr[j] = outputarr[i];
				//Put temporary stored data into final position.
				inputarr[i] = temp1;
				//Put temporary stored data into final position. 
				outputarr[i] = temp2;
			}
		}
		
	}
	
}
//Function to output user data after it has been sorted.
void Output()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Person " << outputarr[i] << ": ate " << inputarr[i] << " pancakes." << endl;
	}
}

void main()
{
	Input();
	Calculate();
	Output();
	
	system("pause");
	return;
}