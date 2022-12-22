#include <iostream>

using std :: cout;
using std :: cin;
using std :: string;
using std :: endl;

class School
{
    private:
         int fees;

    public:
        int standard;

    void setFees(int fees)
    {
        this->fees = fees;
    }

    int getFees()
    {
        return fees;
    }
};
class Student :public School
{
    public:
        string name;
        int phoneNumber;
};

int main()
{
    Student student;

    Student* studentPointer = &student;

    studentPointer->name = "Rheno";
    studentPointer->phoneNumber = 12345;
    studentPointer->standard = 10;
    studentPointer->setFees(20000);

    cout << "Name of the student is " << studentPointer->name << endl << "Phone number of the student is " << studentPointer->phoneNumber << endl << "Standard the student styding is " << studentPointer->standard << endl << "Fees of the student is " << studentPointer->getFees() << endl << "Size of student object is " <<  sizeof(studentPointer) << endl << "Size of student name is " << sizeof( &studentPointer->name )<< endl << "Size of student phone number is " << sizeof(&studentPointer->phoneNumber ) << endl << "Size of Class Student is " << sizeof(Student) ;

}