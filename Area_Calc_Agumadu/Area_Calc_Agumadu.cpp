#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include"Input_Validation_Extended.h" //to verify the input
#include"Color_in_CPP.h" //to change the colors

using namespace std;
double areaOfTriangle(double, double);
double areaOfRectangle(double, double);
double areaOfCircle(double, const double);
int OptionMenu(int);

int main()
{
	const double PI = 3.14159;
	double base, height, width, length, radius = 0.0;
	char redo;
	int option;
	cout<<fixed<<setprecision(3);
	
	do
	{
		cout << "Select Option 1 to calculate area of triangle" << endl;
		cout << "Select Option 2 to calculate area of rectangle" << endl;
		cout << "Select Option 3 to calculate area of circle" << endl;
		cout << "Select Option 4 to clear the screen" << endl;
		cout << "Select Option 5 to exit the program" << endl;
 		
 		//cout << "The area of Triangle is  " << areaOfTriangle << endl;
 		//cout << "The area of Rectangle is  " << areaOfRectangle << endl;
 		//cout << "The area of Circle is  " << areaOfCircle << endl;
 		cout << "Enter the number of your option" << endl;
 		option = validateInt(option);
		cout << OptionMenu(option);	
 	}
	 while(redo != 5);
	
	//while (exit != -1) // do this until the user enters -1 "exit condition"
	
	return 0;
}

OptionMenu(int option)
{
	const double PI = 3.14159;
	double base, height, width, length, radius, areaOfTriangleResult, areaOfRectangleResult, areaOfCircleResult;
	char redo;
	
	
	
	if (option == 1)
	{
		cout<<"Enter base of Triangle = ";
 		base = validateDouble(base);
 		cout<<"Enter height of Triangle = ";
 		height = validateDouble(height);
 		//double areaOfTriangle (base, height)
 		cout << areaOfTriangleResult << endl;
 		areaOfTriangleResult = areaOfTriangle;
	}
	
	else if (option == 2)
	{
		cout<<"Enter width of Rectangle = ";
 		width = validateDouble(width);
 		cout<<"Enter length of Rectangle = ";
 		length = validateDouble(length);
 		cout << areaOfRectangle;
		cout << endl;
	}
	
	else if (option == 3)
	{
		cout<<"Enter radius of Circle = ";
 		radius = validateDouble(radius);
 		cout << areaOfCircle;
		cout << endl;
	}
	else if (option == 4)
	{
		system("cls");
	}
	
}
double areaOfTriangle(double base, double height)
{
	double areaOfTriangle;
 	areaOfTriangle = 0.5 * base * height;
 	cout << "\nArea of Triangle is = " << endl;
 	return areaOfTriangle;
}

double areaOfRectangle(double width, double length)
{
	double areaOfRectangle;
 	areaOfRectangle = width * length;
 	cout << "\nArea of Rectangle is = " << endl;
 	return areaOfRectangle;
}

double areaOfCircle(double radius, const double PI)
{
	double areaOfCircle;
 	areaOfCircle = PI * pow(radius,2);
 	cout << "\nArea of Circle is = ";
 	return areaOfCircle;
}

double areaOfTriangle(double base, double height)
{
	return .5 * base * height;
}
double areaOfRectangle(double length, double width)
{
	return length * width;
}
double areaOfCircle(double radius, const double PI)
{
	return PI * pow(radius,2);
}
