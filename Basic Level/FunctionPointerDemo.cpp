#include<iostream>

using std :: cout;
using std :: cin;
using std :: endl;

void addTwoNumbers(int, int);

int main()
{
    int number1 = 0;
    int number2 = 0;

    void (*functionAddres)(int, int) = &addTwoNumbers;
    cin >> number1 >> number2;

    (functionAddres)(number1, number2);

    return 0;
}

void addTwoNumbers(int number1, int number2)
{
    int answer = number1 + number2;

    cout << "The Addition of two numbers is " << answer << endl;
}
