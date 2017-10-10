//============================================================================
// Name        : exercise2_3
// Author      : Marcin214
// Description : Program that uses three user-defined functions.
//============================================================================
#include <iostream>

using namespace std;

void function1();
void function2();

int main()
{
	function1();
	function1();
	function2();
	function2();

	return 0;
}

void function1(){
	cout << "Three blind mice\n";
}
void function2(){
	cout << "See how they run\n";
}
