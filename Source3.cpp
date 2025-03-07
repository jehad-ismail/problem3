#include <iostream>
using namespace std;

int main()
{
	int currentyear, birthyear, age;
	cout<<"enter your birth year :   "  ;
	cin >> birthyear;
	cout << "enter your current year :   " ;
	cin >> currentyear;
	age = currentyear - birthyear;
	cout << "your age is :   " <<age;


	return 0;
}
//Ask the user to enter their birth year and the current year, then calculate
and display their age.
