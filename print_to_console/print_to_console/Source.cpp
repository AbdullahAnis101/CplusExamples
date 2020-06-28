#include<iostream>
#include<conio.h>
#include<errno.h>
using namespace std;
void print_to_console(char* buffer) {
	int retval;
	retval = cputs(buffer);
	if (retval)
	{
		if (errno == EINVAL) {

			_cputs("Invalid buffer in print_to_console.\r\n");

		}
		else {
			_cputs("Unexpected error in print_to_console.\r\n");
		}
	}
}

	void wprint_to_console(wchar_t* wbuffer)
	{
		int retval;
		retval = _cputws(wbuffer);
	
		if (retval) {
			if (errno == EINVAL) {
			
				_cputws(L"Invalid buffer in wprint_to _console.\r\n");
			}
			else 
				_cputws(L"Unexpected error in  print_to_console. \r\n");
				
		}
	
	}
	int main() {
		// String to print at console.   
	 // Notice the \r (return) character.   
	/*  char* buffer = "Hello world (courtesy of _cputs)!\r\n";
	 wchar_t* wbuffer = L"Hello world (courtesy of _cputws)!\r\n";
		print_to_console(buffer);
		wprint_to_console(wbuffer);
		*/

	
	}
