#include <iostream>

using namespace std;

void printArr(const int x[]);
struct student
{
	string fName;
	string lName;
	string email;
	int studentID;
	double gpa;
};

int main()
{
	cout << " Please enter your name: " << endl;
	student x;
	cin >> x.fName;
	cout << " Your name is: " << endl;
	cout << x.fName;
}
