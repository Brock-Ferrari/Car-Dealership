// Brock Ferrari
// DEALERSHIP HEADER FILE

#pragma once

#include <vector>
#include <string>
#include "Vehicle.h"


class Dealership
{
public:
	// Constructor for Dealership
	Dealership(std::string nm = " ", int mV = 0);

	// Destructor for Dealership
	~Dealership();

	// Setters and Getters
	void setDealershipName(std::string nm);
	void setlotCapacity(int mV);
	std::string getDealershipName();
	int getlotCapacity();

	// Add vehicle to vector
	void addVehicle();

	// Loops through vector to display all vehicles
	void listVehicles();

private:
	std::string name;
	int maxVehicles;

	// Vector of Vehicle objects
	std::vector <Vehicle> vehicles;

	std::string make = " ";
	std::string model = " ";
	std::string year = " ";
};