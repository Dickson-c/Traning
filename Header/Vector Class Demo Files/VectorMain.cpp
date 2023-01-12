#include "VectorClassFile.hpp"
#include <iostream>

int ReadInput()
{
    int value;
    std :: cin >> value;
    return value;
}

int main()
{
     Vector vectorObj;

    int size = 0;

    std :: cout << "Enter size of vector \n ";
    std :: cin >> size;

    while(size !=0)
    {
        vectorObj.getVector(ReadInput);
        size --;
    }

    vectorObj.setVector();
}
