#include <string>
#include <iostream>

#include "Address.h"
#include "Person.h"

using namespace std;

Person::Person(int age, string name) : age(age), name(name)
{
	address = nullptr;
}


Person::Person(int age, string name, int house_number, string street)  : Person(age, name)
{
	if (address != nullptr)
		delete address;

	address = new Address(house_number, street);
}

Person::Person(const Person& p) : Person(p.age, p.name)
{
	if (p.address)
	{
		address = new Address(p.address->house_number, p.address->street);
	}
}

Person::~Person()
{
	if (address != nullptr)
	{
		delete address;
		address = nullptr;
	}

}

void Person::great() {
	cout << "Hello, my name is " << name << " and my age is " << age << endl;

	if (address) {
		cout << "I'm living in " << address->street << " " << address->house_number << " street" << endl;
	}
}


