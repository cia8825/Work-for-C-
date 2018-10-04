//Grade_Ranges_Agumadu.cpp =
//A program for IPO, loops, conditions and color practice
#include<iostream>
#include<ctime> //to peform date/time calculations
#include<cstdlib>//for system("pause") and system("cls")
#include<windows.h>//for using various dos commands
#include<conio.h>//for using color and/or "sleep" command
#include "Input_Validation_Extended.h"
using namespace std;

void changeColor(int); //function prototype ("void" return type, 1 int parameter)

int main ()
{
	char letterGrade = '\0';// declare and initialize a char

	while(letterGrade != 'e' && letterGrade != 'E') //deMorgan's Law
	{
		cout << "Please enter a letter grade (a-f, A-F) E/e tp Exit: ";
		letterGrade = validateChar (letterGrade);
		//process
		if(letterGrade == 'A' || letterGrade == 'a') //test for A or a
		{
			changeColor(113); // a blue text with a light grey background
			cout << "That grade is 90.0 or above" << endl;
		}
		else if(letterGrade == 'B' || letterGrade == 'b') //test for B or b
		{
			changeColor(124); // a red text with a light grey background
			cout << "That grade is 80.0 to 89.9" << endl;
		}
		else if(letterGrade == 'C' || letterGrade == 'c') //test for C or c
		{
			changeColor(159); // a white text with a royal blue background
			cout << "That grade is 70.0 to 79.9" << endl;
		}
		else if(letterGrade == 'D' || letterGrade == 'd') //test for D or d
		{
			changeColor(244); //dark red text and white background
			cout << "That grade is 60.0 to 69.9" << endl;
		}
		else if(letterGrade == 'F' || letterGrade == 'f') //test for F or f
		{
			changeColor(224); //a black text and yellow background
			cout << "That grade is 00.0 to 59.9" << endl;
		}
		else if(letterGrade == 'e' || letterGrade == 'E') //test for e or E //exit
		{
			changeColor(137); //a blue text and grey background
			cout << "Goodbye!!!" << endl;
		}
		else
		{
			changeColor(151);
			cout << "Error. Invalid input." <<endl;
		}
	}		
	return 0;
}

void changeColor(int colorValue)  //function definition 
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); //use of SetConsoleTextAtrribute()
	SetConsoleTextAttribute(console,colorValue); //set the color of the text to user value 1-255
}
