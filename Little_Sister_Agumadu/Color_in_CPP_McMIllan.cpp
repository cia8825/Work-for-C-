/*
CPP/Folder: Color_in_CPP_YourLastName
//functions, color, and loops
//Gaddis CH 6, read it. Functions 
//Free CH Gaddis PowerPoint in Lesson 6 //Filename: Color_in_Cpp_YourLastname
*/
#include<iostream>
#include<ctime> //to peform date/time calculations
#include<cstdlib>//for system("pause") and system("cls")
#include<windows.h>//for using various dos commands
#include<conio.h>//for using color and/or "sleep" command
using namespace std;

void changeColor(int); //function prototype ("void" return type, 1 int parameter)

int main()
{
	changeColor(10); //function call; implement the function per the definition
	cout << "Message in color" << endl;
	changeColor(7);//function call change back to the default text
	
	for(int i = 0; i <= 255; i++)
	{
		changeColor(i); //set color to i...1...255
			cout << "Option: " << i << endl; 
	}
	changeColor(7);//function call change back to the default text
	return 0; 
}

void changeColor(int colorValue)  //function definition 
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); //use of SetConsoleTextAtrribute()
	SetConsoleTextAttribute(console,colorValue); //set the color of the text to user value 1-255
}
