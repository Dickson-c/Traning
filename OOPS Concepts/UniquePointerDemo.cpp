#include <iostream>
#include <memory>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;
using std :: unique_ptr;
using std :: make_unique;

class Student
{
        string name;
        int rollNumber;
        float fees;
    public:
        Student(string name , int rollNumber , float fees)
        {
            this->name = name;
            this->rollNumber = rollNumber;
            this->fees = fees;
        }

        void Display()
        {
            cout << name << endl << rollNumber << endl << fees << endl;
        }
};

int main()
{

    string name ="";
    int rollNumber = 0;
    float fees = 0.00;

    cin >> name >> rollNumber >> fees;

    unique_ptr<Student> up = make_unique<Student>(name , rollNumber , fees);

    up->Display();
}
