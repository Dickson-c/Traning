#include <iostream>

using std :: cout ; 
using std :: cin ;
using std :: string ;
using std :: endl;

class Employee
{
    protected:
        int accountNumber;
        string bankName;
};

class EmployeeDetails : public Employee
{
    public:
        string name;
        int phoneNumber;

    void setaccountNumber(int accountNumber)
    {
        this->accountNumber = accountNumber;
    }

    void setbankName(string bankName)
    {
        this->bankName = bankName;
    }

    int getaccountNumber()
    {
        return accountNumber;
    }

    string getbankName()
    {
        return bankName;
    }
};

int main()
{
    EmployeeDetails employeeDetails;

    int accountNumber = 0;
    string bankName = "";
    cin >> accountNumber >> bankName >> employeeDetails.name>> employeeDetails.phoneNumber;

    employeeDetails.setaccountNumber(accountNumber);
    employeeDetails.setbankName(bankName);

    cout << "name : " << employeeDetails.name << endl << "Ph.no : " << employeeDetails.phoneNumber << endl << "Acc.no. : " << employeeDetails.getaccountNumber() << endl << "Bank name : " << employeeDetails.getbankName() << endl;
}
