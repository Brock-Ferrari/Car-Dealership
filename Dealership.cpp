// Brock Ferrari
// DEALERSHIP IMPLEMENTATION FILE

#include <vector>
#include <string>
#include <iostream>
#include "Dealership.h"
#include "Vehicle.h"


	Dealership::Dealership(std::string nm, int mV)
	{
		name = nm;
		maxVehicles = mV;
	}

	Dealership::~Dealership() {};

	void Dealership::setDealershipName(std::string nm)
	{
		name = nm;
	}
	void Dealership::setlotCapacity(int mV)
	{
		maxVehicles = mV;
	}
	std::string Dealership::getDealershipName()
	{
		return name;
	}
	int Dealership::getlotCapacity()
	{
		return maxVehicles;
	}

	void Dealership::addVehicle()
	{
		std::cout << "Enter a vehicle make: ";
		std::cin >> make;
		std::cout << "Enter a vehicle model: ";
		std::cin >> model;
		std::cout << "Enter a vehicle year: ";
		std::cin >> year;

		Vehicle v(make, model, year);

		vehicles.push_back(v);
	}

	void Dealership::listVehicles()
	{
		for (int i = 0; i < vehicles.size(); ++i)
		{
			vehicles[i].printVehicle();
		}
		return;
	}