#pragma once

#include <iostream>

using std :: string;

class Bank
{
    private:
        int bankReferenceNumber;
    
    public:
        void setBankReferenceNumber(int referenceNumber);
        int  getBankReferenceNumber();
        string bankName;
        int mimimumBalance;

};
