#include<iostream>
#include<string>

using namespace std;

class Test {

private:
	int num;
	float* ptr;

public:
	Test()
	{
		cout << "Enter total number of student:";
		cin >> num;

		ptr = new float[num];


		cout << "Enter GPA of student." << endl;
		for (int i = 0; i < num; ++i)
		{
			cout << "Student" << i + 1 << ":";
			cin >> *(ptr + i);


		}

	}


	// deconstructor for memory management
	~Test() {
		delete[] ptr;
	}
	void Display() {
		cout << "\nDisplaying GPA of students. " << endl;
		for (int i = 0; i < num; ++i) {

			cout << "Student" << i + 1 << " : " << *(ptr + i) << endl;
		}


	}



};




int main() {
	Test s;
	s.Display();
	return 0;
}