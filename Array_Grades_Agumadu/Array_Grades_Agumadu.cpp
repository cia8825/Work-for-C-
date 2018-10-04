/*Folder: //Array_Grades_Agumadu
CPP: Array_Grades_Agumadu.cpp
Teacher: Dr. Tyson McMillan, 4-19-2017
Student: AGUMADU


#include <iostream>
#include <iomanip>
using namespace std;



int main()
{

const int max = 10;
double gradesArray[max];
double sum = 0.0, Ave = 0.0;
double temp_value;

cout << fixed << setprecision (2);

cout << "Please type 10 integers.\n";
for( int i = 0; i < max; i++ )
	{
		cout << "Please enter grade" << (i + 1) << ": ";
		cin >> gradesArray[i];
		sum += gradesArray[i];
	}
	
	//Next: Use Bubble Sort to sort values in the array ASC (1...3, A-Z)
	for(int b = 0; b < max; b++)
	{
		for(int inner_loop_index = b+1; inner_loop_index < max; inner_loop_index++)
		{
			if(gradesArray[b] > gradesArray[inner_loop_index]) //ASC > and DESC <
			{
				// a swap numbers method
				temp_value = gradesArray[b];
				gradesArray[b] = gradesArray[inner_loop_index];
				gradesArray[inner_loop_index] = temp_value;
			}
		}
	}
	//re-display the array now that it is indeed sorted - re-write the for loop DESC
	cout << "\nThe Sorted Array is:\n";
	for(int j = 0; j < max; j++)
	{
		cout << "gradesArray[" << j <<"]=" << gradesArray[j] << endl;
	}

Ave=sum/max;
//outputave
//sortarray DESC "Bubble Sort"
//Output resulys to user
cout << "\n\nThe sum of these numbers is " << sum << "\n\n";
cout << "\n\nThe Ave of these numbers is " << Ave << "\n\n";

return 0;
}
