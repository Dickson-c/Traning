#include "VectorClassFile.hpp"

void Vector :: setVector()
{
    int arr[vectorInput.size()] ;
    for(int i=0 ; i<vectorInput.size() ; i++)
    {
       arr[i] = vectorInput[i]();
    }
    for(int i: arr)
    {
        std :: cout << arr[i] << " ";
    }
}
