#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
/*
This program loops until this user
presses a key. If _kbhit returns nonzero, a keystorke is waiting in the
buffer. The program can call _getch or _getche to get the keystroke.
*/

int main(void) {
 // Displays message until key is pressed
	while (!_kbhit())

		//puts it directly into the console
		_cputs("Hit me!!");
	// Use _getch to throw key away.

	printf("\nKey struck was ' %c'\n", _getch());



}