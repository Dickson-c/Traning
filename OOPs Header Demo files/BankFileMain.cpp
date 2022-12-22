#include "BankClass.h"

using std :: cout;
using std :: cin;
using std :: endl;

int main()
{
    Customer customer;
    Customer* customerReference = &customer;

    long accountNumber = 0;
    int bankReferenceNumber = 0;
    
    cout << "Enter bank name : " ;
    cin >> customerReference->bankName;

    cout << "Enter bank reference number : " ;
    cin >> bankReferenceNumber;

    cout << "Enter minimum balance : " ;
    cin >> customerReference->mimimumBalance;

    cout << "Enter customer account number : " ;
    cin >> accountNumber;

    cout << "Enter customer name : ";
    cin >> customerReference->name;

    cout << "Enter customer account balance : " ;
    cin >> customerReference->bankBalance;

    customerReference->setAccountNumber(accountNumber);
    customerReference->setBankReferenceNumber(bankReferenceNumber);

    customerReference->message = "Above minimum balance";

    if(customerReference->bankBalance < customerReference->mimimumBalance)
    {
        customerReference->message = "Below minimum balance";
    }

    cout << endl << "\t " << customerReference->bankName << endl <<"Name of the customer = " << customerReference->name << endl << "Account balance state = " << customerReference->message << endl;
}
