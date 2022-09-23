// Brock Ferrari
// DEALERSHIP DRIVER FILE

#include <iostream>
#include "Dealership.h"

using namespace std;

int main()
{

	cout << "Welcome to the Dealership Application!\n\n";

	// Prompts user for Dealership Name
	string dealerName = " ";
	cout << "Enter the name of the dealership: ";
	getline(cin, dealerName);

	// Prompts user for lot capacity
	int lotCapacity = 0;
	cout << "Enter the lot capacity of the dealership: ";
	cin >> lotCapacity;
	while (cin.fail() || lotCapacity < 0)
	{
		cout << "The lot capacity must be a positive integer. Please try again." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> lotCapacity;
	}

	// Creates Dealership object
	Dealership d(dealerName, lotCapacity);

	// For looping; ensures vehicle number does not exceed lot capactiy
	int vNum = 1;

	// Loops menu while the user does not want to quit
	char selection = ' ';
	while (selection != 'Q')
	{
		cout << "\nMain Menu\n\n";
		cout << "A - Add a new vehicle\n\n";
		cout << "L - List vehicles\n\n";
		cout << "Q - Quit\n\n";

		cout << "Selection:  ";
		cin >> selection;
		while (cin.fail())
		{
			cout << "Invalid input.Please try again." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> selection;
		}
		

		// Actions if A or L are entered
		switch (selection)
		{
		case 'A':
			if (vNum <= lotCapacity)
			{
				d.addVehicle();
				++vNum;
			}
			else
			{
				cout << "The lot capacity has been reached. You cannot add any more vehicles.";
			}
			break;

		case 'L':
			d.listVehicles();
			break;
		}

		// Will break out of While loop if Q is entered
	}

	cout << "\nApplication Terminated\n\n";

	system("pause");
	return 0;
}
