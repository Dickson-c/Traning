#include "CustomerInherited.hpp"

using std :: cout;
using std :: cin;

int Customer :: CheckBankBalance(int CheckbankBalance)
    {
        int accountMaintanceFees = 0;

        cout << "Enter account Maintance Fees : ";
        cin >> accountMaintanceFees ;

        CheckbankBalance = CheckbankBalance - accountMaintanceFees;

        return CheckbankBalance;
    }
