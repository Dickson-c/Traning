#include <iostream>
#include <functional>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;
using std :: function;
int main()
{
    int number1, number2;

    cin >> number1 >> number2;

    function<void ()> newFunction = [&]()
    {
            cout << number1 + number2;
    };
}