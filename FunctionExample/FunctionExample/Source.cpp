#include<iostream>
#include<string>

using namespace std;
class counter {
public:
	int num;
	counter() {
		num = 0;
	}

};
void myFunction() {
	counter ber;
	ber.num++;
	cout << ber.num;
	cout << "I just got executed!\n";
}


int main() {
	counter num;
	myFunction();
	myFunction();
	myFunction();
	cout << num.num;
	return num.num;

}
