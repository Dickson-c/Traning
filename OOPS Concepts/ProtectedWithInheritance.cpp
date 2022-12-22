#include <iostream>

using std ::cout;
using std ::string;

class Employee
{
protected:
    string bankName;
};

class EmployeeDetails : public Employee
{
public:
    void Display()
    {
        bankName = "d";
        cout << bankName;
    }
};

int main()
{
    EmployeeDetails emp;
    emp.Display();
}
