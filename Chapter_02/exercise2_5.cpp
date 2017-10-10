//============================================================================
// Name        : exercise2_5
// Author      : Marcin214
// Description : The program should request the Celsius value as input from the
//               user and display the result as equivalent in Fahrenheit's scale.
//============================================================================
#include <iostream>

int cel_to_fahre(int);

int main()
{	using namespace std;
	int celsius_degree;

	cout << "Enter the temperature in the Celsius scale: ";
	cin >> celsius_degree;
	cout << endl << celsius_degree << " degrees Celsius is ";
	cout << cel_to_fahre(celsius_degree) << " degrees Fahrenheit";

	return 0;
}

int cel_to_fahre(int celsius){

	int fahrenheit= 1.8*celsius+32;

	return fahrenheit;
}
