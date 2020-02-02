#pragma once

#include <string>
#include "Person.h" 

class Employee : public Person {

public:
	std::string work;

	Employee(int age, std::string name, int house_number, std::string street, std::string work = std::string())
		: Person(age, name, house_number, street), work(work)
	{
	}

	void great() override;
	
};
