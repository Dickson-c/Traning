#include <iostream>
#include <functional>

int main()
{
    int number1, number2;

    std ::  cin >> number1 >> number2;

    std :: function<void ()> newFunction = [&]()
    {
          std ::  cout << number1 + number2;
    };

    newFunction();
}
