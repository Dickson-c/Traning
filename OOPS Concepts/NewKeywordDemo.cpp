#include <iostream>
using std :: cout;
using std :: cin;
using std :: string;
using std :: endl;
class Student
{
    string name;
    int rollNumber;
    float fees;

    public:
        Student(string n , int r , float f)
        {
            name = n;
            rollNumber = r;
            fees = f;
        }

        void Display()
        {
            cout << name << endl << rollNumber << endl << fees << endl;
        } 
};
int main()
{
    string name = "";
    int rollNumber = 0;
    float fees = 0.0;

    cout << "Enter student name ; " ;
    cin >> name;
    cout << "Enter student roll number : " ;
    cin >> rollNumber;
    cout << "Enter student fees : " ;
    cin >> fees;

    Student *student = new Student(name , rollNumber , fees);
    
    student->Display();

    delete(student);
}
