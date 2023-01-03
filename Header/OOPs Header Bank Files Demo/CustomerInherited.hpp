#pragma once

#include "BankClass.hpp"

class Customer : public Bank
{
    private:
        long accountNumber;

    public:
        string name;
        float bankBalance;
        string message;
        void setAccountNumber(long accountNumber);
        long getAccountNumber(void);
        int CheckBankBalance(int CheckbankBalance);
    
};
