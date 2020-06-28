// carExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;


//create a Car class with some attributes
class Car {
public:
    string brand;
    string model;
    int year;

};


int main()
{
    //Create an object of Car.
    Car carObj1;
    carObj1.brand = "BMW";
       carObj1.model = "XS";
        carObj1.year = 1999;

//Create another object of a car.
        Car carObj2;
        carObj2.brand = "Ford";
        carObj2.model = "Mustang";
        carObj2.year = 1969;

        cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
        cout << carObj2.brand << " " << carObj2.model << " " << carObj1.year << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
