#include <iostream>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

class Student 
{
    private :
        string city;
        int phoneNumber;
    
    public :
        string name;
        int rollNumber;
    
    void setCity(string city)
    {
        this->city = city;
    }
    void setPhoneNumber(int phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }

    string getcity()
    {
        return city;
    }
    int getPhoneNumber()
    {
        return phoneNumber;
    }

    Student(string name, int rollNumber)
    {
        this->name = name;
        this->rollNumber = rollNumber;
    }
};

int main()
{
    Student student("Dickson" , 112 );
    
    student.setCity("Coimbatore");
    student.setPhoneNumber(9442341);

    cout << student.name << endl << student.rollNumber << endl << student.getcity() << endl << student.getPhoneNumber() << endl;
}
