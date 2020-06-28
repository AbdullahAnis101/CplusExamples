#include<iostream>
#include<string>

using namespace std;
int main() {
	string y;

	cout << "Sandwich type: ";
	//Takes in Everything until enter key is hit.

	getline(cin, y);
	cout << "Creating " << y;
	cout << " Sandwich. \n" << y;
	cout << "Please enter to exit...\n";
	getline(cin, y);
	
	char x[100];
	cin >> x;
	cin.getline(x, 100);
	cin >> x;
	cin >> x;
	cin >> x;

	return 0;
}