//============================================================================
// Name        : exercise2_2
// Author      : Marcin214
// Description : Program which asks for a distance in meters and converts it to miles.
//============================================================================
#include <iostream>

int main()
{
	using namespace std;
	const int meters_in_mile = 1852;
	int meters;

	cout << "Gives the length of the road in meters: ";
	cin >> meters;
	cout << endl << "The length of the road in miles is: ";
	cout << meters*meters_in_mile;

	return 0;
}
