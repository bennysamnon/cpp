#pragma once


class Address {
public:
	int house_number;
	std::string street;

	Address(int house_number, std::string street) : house_number(house_number), street(street)
	{

	}

	~Address() {

	}
};