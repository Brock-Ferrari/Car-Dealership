// Brock Ferrari
// VEHICLE IMPLEMENTATION FILE

#include <string>
#include "Vehicle.h"
#include <iostream>


	// Constructor for Vehicle
	Vehicle::Vehicle(std::string mk, std::string md, std::string yr)
	{
		make = mk;
		model = md;
		year = yr;
	}

	Vehicle::~Vehicle() {};

	// Setters and Getters
	void Vehicle::setMake(std::string mk)
	{
		make = mk;
	}
	void Vehicle::setModel(std::string md)
	{
		model = md;
	}
	void Vehicle::setYear(std::string yr)
	{
		year = yr;
	}
	std::string Vehicle::getMake()
	{
		return make;
	}
	std::string Vehicle::getModel()
	{
		return model;
	}
	std::string Vehicle::getYear()
	{
		return year;
	}

	// Prints vehicle make, model, and year
	void Vehicle::printVehicle()
	{
		std::cout << std::endl << make << std::endl;
		std::cout << model << std::endl;
		std::cout << year << std::endl;
	}
