#include <iostream>

#include "Employee.h"

using namespace std;

void Employee::great()
{
	Person::great();

	cout << " and i'm work at " << work << endl;
}
