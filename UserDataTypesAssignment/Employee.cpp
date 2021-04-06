#include "Employee.h"
#include <iostream>

const float Employee::TAX = 0.1f;

using namespace std;


void Employee::Read()
{

	cout << "Enter first name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter zipcode: ";
	cin >> zipcode;
	cout << "Enter wage: ";
	cin >> wage;
	cout << "Enter days worked: ";
	cin >> daysWorked;

	for (int i = 0; i < daysWorked; i++)
	{
		cout << "enter hours worked for day " << i + 1 << ": ";
		cin >> hoursWorkedPerDay[i];
		totalHours += hoursWorkedPerDay[i];
	}
	grossIncome = totalHours * wage;
	netIncome = grossIncome - (TAX * grossIncome);
}

void Employee::Write() 
{
	cout << name << " worked " << totalHours << " hours at $" << wage << " an hour.\n";
	cout << "Gross Income: $" << grossIncome << "\n";
	cout << "Net Income: $" << netIncome << "\n";

}