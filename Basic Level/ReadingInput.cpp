#include <iostream>
#include <string>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

int main()
{
    int inputNum1 = 0;
    int inputNum2 = 0;
    string name ="";

   // cin >> inputNum1 >> inputNum2;
    getline(cin , name);

    cout << inputNum1 << inputNum2 << endl;
    cout << name;
}
