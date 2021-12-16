#include <iostream>

using namespace std;
struct student{
int studentId;
double gpa;
std::string fullName;
int units;
};
void inputData(student &s){
    cout << "Enter studentID: ";
    cin >> s.studentId;
    while(s.studentId<1000){
        cout << "Error studentID should have atleast 4 digits and must be positive" << endl;
        cout << "Enter studentID: ";
        cin >> s.studentId;
    }

    cout << "Enter gpa: ";
    cin >> s.gpa;
    while(s.gpa<0 || s.gpa>4){
        cout << "Error gpa should be between 0 and 4 (inclusive) " << endl;
        cout << "Enter gpa: ";
        cin >> s.gpa;
    }

    cout << "Enter full name: ";
    cin >> s.fullName;


    cout << "Enter units: ";
    cin >> s.units;
    while(s.units<0){
        cout << "Error units should be positive " << endl;
        cout << "Enter units: ";
        cin >> s.units;
    }
    cout << endl;
}
void printData(student &s){
    cout <<"StudentID: " << s.studentId << endl;
    cout <<"Gpa: " << s.gpa << endl;
    cout <<"Full Name: " << s.fullName << endl;
    cout <<"Units: " << s.units << endl;
}
int main()
{
    student student1,student2;
    cout << "Enter the details of student 1:" <<endl;
    inputData(student1);

    cout << "Enter the details of student 2:" <<endl;
    inputData(student2);

    cout << "Details of student 1:" <<endl;
    printData(student1);

    cout << "Details of student 2:" <<endl;
    printData(student2);

    return 0;
}

