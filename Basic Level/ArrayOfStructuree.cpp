#include <iostream>
#include <string>

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
    int totalStudents = 0;

    cout << "Enter total number of students : " ;
    cin >> totalStudents;

    Student student[totalStudents];

    for(int iterator = 0 ; iterator < totalStudents ; iterator++)
    {
        cout << "Enter details of student" << iterator+1 << ": " << endl;

        cout << "Roll Number : ";
        cin >> student[iterator].rollNumber;

        cout << "Name : " ;
        cin >> student[iterator].name;

        cout << "CGPA :";
        cin >> student[iterator].cgpa;
        cout << endl;
    }

    for(int iterator = 0 ; iterator < totalStudents ; iterator++)
    {
        cout << "Name of Student" << iterator+1 << " is " << student[iterator].name << " , " << "whose roll number is " << student[iterator].rollNumber << " , " << "and has a CGPA of " << student[iterator].cgpa << endl;
    }
}
