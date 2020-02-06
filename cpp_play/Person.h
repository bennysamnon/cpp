#pragma once

#include "Address.h"

class Person {

public:
	int age;
	std::string name;
	Address* address;

	Person(int age, std::string name);
	Person(int age, std::string name, int house_number, std::string street);

	//copy ctr
	Person(const Person& p);

	~Person();
	virtual void great();
};