#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
	double salary;
	string name;

public:
	Employee(string n, double s)
	{
		name = n;
		salary = s;
	}

	void updateName(string n)
	{
		name = n;
	}
	 
	void updateSalary(double s)
	{
		salary = s;
	}

	const string getName()
	{
		return name;
	}

	const double getSalary()
	{
		return salary;
	}


};

