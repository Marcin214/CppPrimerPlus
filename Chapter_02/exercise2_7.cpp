//============================================================================
// Name        : exercise2_7
// Author      : Marcin214
// Description : Program which asks the user to enter an hour value and a minute
//               value and displays the two values in new format.
//============================================================================
#include <iostream>

void clock(int, int);

int main(){
	using namespace std;
	int hour, minute;

	cout << "Enter the number of hours: ";
	cin >> hour;
    cout << endl << "Enter the number of minutes: ";
	cin >> minute;

	clock(hour, minute);

	return 0;
}

void clock(int hour, int minute){
	using namespace std;
	cout << hour << ":" << minute;
}
