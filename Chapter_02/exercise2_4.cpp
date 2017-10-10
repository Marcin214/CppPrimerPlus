//============================================================================
// Name        : exercise2_4
// Author      : Marcin214
// Description : Program which compute and display the age in months.
//============================================================================
#include <iostream>


int main(){
	using namespace std;
	const int months_in_year = 12;
	int age_years;

	cout << "How old are you ? ";
	cin >> age_years;
	cout << "\nYour age in months is: " << age_years*months_in_year ;

	return 0;
}
