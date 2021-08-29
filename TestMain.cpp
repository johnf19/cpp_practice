#include "employee.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

	Employee e1 = Employee("Jenny Jacobs", 35000);
		//Employee("Myron Smith", "MS7571", "IT", "Programmer", 5),
		//Employee("Chris Raines", "CR6873", "Manufacturing", "Engineer", 30)
	cout << e1.getName();

	return 0;
}