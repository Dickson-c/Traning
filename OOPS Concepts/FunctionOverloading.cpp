#include <iostream>

using namespace std;

double add(int a, double b)
{
    return a+b;
}

double add(double a, float b)
{
    return a+b;
}

int main()
{
    float num = 7.0;

    //cout << add(2.33, num) << endl;
    cout << add(1, 2.33) << endl;
}
