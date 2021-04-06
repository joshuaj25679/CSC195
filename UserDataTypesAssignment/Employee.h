#pragma once

class Employee
{
private:
	char name[32];
	int age;
	int zipcode;
	float wage;
	unsigned short daysWorked;
	float hoursWorkedPerDay[7];
	static const float TAX;
	int totalHours = 0;
	float grossIncome = 0;
	float netIncome = 0;

public:
	void Read();
	void Write();
};