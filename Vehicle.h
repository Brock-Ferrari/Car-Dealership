// Brock Ferrari
// VEHICLE HEADER FILE

#pragma once

#include <string>

class Vehicle 
{
public:
	// Constructor for Vehicle
	Vehicle(std::string mk = " ", std::string md = " ", std::string yr = " ");

	// Destructor for Vehicle
	~Vehicle();

	// Setters and Getters
	void setMake(std::string mk);
	void setModel(std::string md);
	void setYear(std::string yr);
	std::string getMake();
	std::string getModel();
	std::string getYear();

	// Prints vehicle make, model, and year
	void printVehicle();

	private:
	std::string make;
	std::string model;
	std::string year;
};