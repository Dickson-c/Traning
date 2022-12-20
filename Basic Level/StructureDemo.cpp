#include<iostream>
#include<string>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

typedef struct Student
{
    int rollNumber;
    string name;
    float cgpa;
} Student;

int main()
{
    Student student;

    getline(cin, student.name);
    cin >> student.rollNumber;
    cin >> student.cgpa;

    cout << "Student name is " << student.name << endl << "Student roll no. is " << student.rollNumber << endl << "CGPA of student is " << student.cgpa;
}
