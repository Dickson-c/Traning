#include <iostream>

using std :: cout ; 
using std :: cin ;
using std :: string ;
using std :: endl;

class Employee
{
    protected:
        int BankReferenceNumber;
        string bankName;
};

class EmployeeDetails : public Employee
{
    public:
        string name;
        int phoneNumber;

    void setBankReferenceNumber(int BankReferenceNumber)
    {
        this->BankReferenceNumber = BankReferenceNumber;
    }

    void setbankName(string bankName)
    {
        this->bankName = bankName;
    }

    int getBankReferenceNumber()
    {
        return BankReferenceNumber;
    }

    string getbankName()
    {
        return bankName;
    }
};

int main()
{
    EmployeeDetails employeeDetails;

    int BankReferenceNumber = 0;
    string bankName = "";
    cin >> BankReferenceNumber >> bankName >> employeeDetails.name>> employeeDetails.phoneNumber;

    employeeDetails.setBankReferenceNumber(BankReferenceNumber);
    employeeDetails.setbankName(bankName);

    cout << "name : " << employeeDetails.name << endl << "Ph.no : " << employeeDetails.phoneNumber << endl << "Bank ref.no. : " << employeeDetails.getBankReferenceNumber() << endl << "Bank name : " << employeeDetails.getbankName() << endl;
}
