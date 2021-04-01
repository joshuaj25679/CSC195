// DataTypesAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string name;
	char initial;
	int age;
	bool isAdult;
	int zipcode;
	float wage = 0;
	int daysWorked;
	int hoursWorkedPerDay[7];
	const float TAX = 0.1f;
	int totalHours = 0;

	cout << "Enter first name: ";
	cin >> name;
	cout << "Enter last name initial: ";
	cin >> initial;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter zipcode: ";
	cin >> zipcode;
	cout << "Enter wage: ";
	cin >> wage;
	cout << "Enter days worked: ";
	cin >> daysWorked;
	if (age > 18) {
		isAdult = true;
	}
	else {
		isAdult = false;
	}
	for (int i = 0; i < daysWorked; i++) 
	{ 
		cout << "enter hours worked for day " << i+1 << ": ";
		cin >> hoursWorkedPerDay[i];
		totalHours += hoursWorkedPerDay[i];
	}

	float grossIncome = totalHours * wage;
	float netIncome = grossIncome - (TAX * grossIncome);

	cout << name << " worked " << totalHours << " hours at $" << wage << " an hour.\n";
	cout << "Gross Income: $" << grossIncome << "\n";
	cout << "Net Income: $" << netIncome << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
