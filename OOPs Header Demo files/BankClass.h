#include <iostream>

using std :: string;

class Bank
{
    private:
        int bankReferenceNumber;
    
    public:
        string bankName;
        int mimimumBalance;

    void setBankReferenceNumber(int bankReferenceNumber)
    {
        this->bankReferenceNumber = bankReferenceNumber;
    }

    int getBankReferenceNumber()
    {
        return bankReferenceNumber;
    }
};

class Customer : public Bank
{
    private:
        long accountNumber;

    public:
        string name;
        float bankBalance;
        string message;

    void setAccountNumber(long accountNumber)
    {
        this->accountNumber = accountNumber;
    }

    long getAccountNumber()
    {
        return accountNumber;
    }
};
