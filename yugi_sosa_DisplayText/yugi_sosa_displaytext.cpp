/*
Yugi Sosa - September 21 2017, Second Period

Assignment Name : Display Text

Introduction into C++ IDE Visual Studios 2015
Create New Project and Display Text to Console
*/
// Libraries
#include <iostream>
#include <conio.h>
// Namespaces
using namespace std;
// Functions ()
void pause() {
	cout << "Press any key to continue . . . ";
	while (!_kbhit());
	cout << '\n';
}

// MAIN
void main() {
	char text_1400000000= 'l';
	// Display Text
	cout << "He" << text_1400000000 << text_1400000000 << "o World! " << endl;
	cout << "2nd Class Period" << endl;
	cout << "Yugi sosa" << endl;
	pause();
}