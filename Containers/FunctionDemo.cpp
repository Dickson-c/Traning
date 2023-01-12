#include <iostream>
#include <functional>

int add(int a, int b , int c)
{
    return a+b+c;
}

int main()
{
    std :: function<int(int , int , int)> Fun = add;

    std :: cout << Fun(3,3,3)<< "\n";

    std :: cout << sizeof(Fun) << "\n";
}
