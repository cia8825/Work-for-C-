/*Folder: Little_Sister_YourLastName
CPP: Function_Practice_Little_Sister.cpp
Teacher: Dr. Tyson McMillan, 4-5-2017
Student: AGUMADU

Description: Dr_T's little sister is smart.
She uses a divide and concur method to get $20 from the parents.
She asks mom and dad individually. Based upon their responses she can
earn $0, $20, or $40 from them.
Create a dad/mom yes/no (True/false) program to capture the possibilities.
Use functions and pass by value.
Also address the programming challenges in int main() make the appropriate
function prototypes, function definition, and functions calls to make the program work.
This completed work shall be uploaded to Extra Credit item 15: Little_Sister_YourLastName.zip
*/
#include<iostream>
#include<cstdlib>//for system("pause") and system("cls")
#include<windows.h>//for using various dos commands
#include<conio.h>//for using color and/or "sleep" command
#include<iomanip> // for manipulation of precision
#include "Input_Validation_Extended.h"
using namespace std;

//$_earned       mom  dad
double MakeBank(bool,bool); //function prototype
void welcomeMessage(); //function prototype
void dayOfTheWeek(int); //function prototype
void changeColor(int colorValue); //function prototype
double numberCube(double); //function prototype

int main()
{
    int dayEntered = 0; //local day of the week
	welcomeMessage(); //function call
	char exit = '\0';
	
	do
    {
		//function calls (true = "yes", false="no"
   	 	cout << "\nLittle Sister Function calls: ";
    	cout << "\nOption 1, Little Sister Earns: $" << MakeBank(true,false);
    	cout << "\nOption 2, Little Sister Earns: $" << MakeBank(false,true);
    	cout << "\nOption 3, Little Sister Earns: $" << MakeBank(true,true);
    	cout << "\nOption 4, Little Sister Earns: $" <<  MakeBank(false,false);

    	/*Programming Challenges
      	1. Extend this program to output how much Little Sister earns in each scenario.
      	2. Create a void welcomeMessage(); function to show a nice greeting on screen to the program.
      	3. Extend this program to write a void dayOfTheWeek(int); function given user input of the number (1 output Sunday);
      	4. Output each day of the week in a different color.
      	5. Extend this program create a function double numberCube(double); to output the cube of the number passed.
      	6. Extend this program set the precision of the numberCube result to 4 decimal places
      	7. Loop the program until exit conditions 'E' AND 'e', clear the screen upon each loop #include<cstdlib> system("cls");
    	*/
    	while(dayEntered != -1)
    	{
    		cout << "Please enter number for a day of the week (1-7), -1 to exit: ";
    		dayEntered = validateInt(dayEntered); //input validation
    		dayOfTheWeek(dayEntered); //function call based upon user input
		}
		//Ask the user to exit or continue
		cout << "\nPress (e or E) to exit, any key to continue: ";
		exit = validateChar(exit);
		system("cls"); //clear the screen
		dayEntered = 0; //reset the dayEnter to 0
		
	}while(exit != 'e' && exit != 'E');
		
		
    return 0;
}

double MakeBank(bool mom, bool dad) //definition
{
	double amtEarned = 0.0; //what sister can get from parents
	//handle each scenario How much does Little Sister earn $20 increments.
	if(mom == true && dad == false)
	{
		amtEarned = 20.0;
	}
	else if(mom == false && dad == true)
	{
		amtEarned = 20.0;
	}
	else if(mom == true && dad == true)
	{
		amtEarned = 40.0;
	}
	else if(mom == false && dad == false)
	{
		amtEarned = 0.0;
	}
	return amtEarned;
}

void welcomeMessage() //definition
{
	cout << "Greeeting, welcome to my program." << endl;
	cout << "Enjoying the view as Dr_T's Little Sister can MakeBank." <<endl;
}

void dayOfTheWeek(int day) //definition
{
	if(day == 1)
	{
		changeColor(240);
		cout << "It's Sunday!" << endl;
	}
	else if(day == 2 )
	{
		changeColor(249);
		cout << "It's Monday!" << endl;
	}
	else if(day == 3 )
	{
		changeColor(176);
		cout << "It's Tuesday!" << endl;
	}
	else if(day == 4 )
	{
		changeColor(116);
		cout << "It's Wednesday!" << endl;
	}
	else if(day == 5 )
	{
		changeColor(121);
		cout << "It's Thursday!" << endl;
	}
	else if(day == 6 )
	{
		changeColor(48);
		cout << "It's Friday!" << endl;
	}
	else if(day == 7 )
	{
		changeColor(60);
		cout << "It's Saturday!" << endl;
	}
	else if(day == -1)
	{
		changeColor(28);
		cout << "Exit: Goodbye." << endl;
	}
	else
	{
		changeColor(12);
		cout <<"Invalid input. Please enter 1-7, -1 to exit." << endl;
	}
	changeColor(63);
	//calling a function within another functions
	//set precision to 4 decimal places
	cout << "The Cube of the day of the week entered is " << fixed << setprecision(4) << numberCube(day) << endl;
}

void changeColor(int colorValue) //function definition
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); //use of SetConsoleTextAtrribute()
	SetConsoleTextAttribute(console,colorValue); //set the color of the text to user value 1-255
}

double numberCube(double number)
{
	return (number * number * number);
}



