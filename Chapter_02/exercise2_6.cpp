//============================================================================
// Name        : exercise2_6
// Author      : Marcin214
// Description : Program which takes a distance in light years as an argument
//               and then returns the distance in astronomical units.
//============================================================================
#include <iostream>

double astro_unit(float);

int main(){
	using namespace std;
	float light_years;

	cout << "Enter the number of light years: ";
    cin >> light_years;
    cout << endl <<light_years << " light years = " <<	astro_unit(light_years) << " astronomical units";

	return 0;
}

double astro_unit(float var){
double astro = var*63240;
return astro;
}
