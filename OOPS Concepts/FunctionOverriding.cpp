#include <iostream>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

class Grandfather
{
    public:
        void Addition(int number1, int number2)
        {
            cout << number1 + number2;
        }
};

class Father : public Grandfather
{
    public:
        void Addition(int number1, int number2)
        {
            cout << number1 + number2;
        }
};

class Son : public Father
{
    public:
    void Addition(int number1, int number2)
    {
        cout << number1 + number2;
    }
};

int main()
{
    Son son;

    son.Addition(2,2);
}
