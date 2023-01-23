#include <iostream>
#include <vector>
#include <functional>
#include <iterator>

std :: vector<std :: function<int()>> array;
void getVectorValues();

int GetInput()
{
    int input = 0;
    std::cout << "\nFunction called now enter values" << std::endl;
    std :: cin >> input;
    return input;
}

void setVectorValues(std :: function<int()> GetInput) 
{
    array.push_back(GetInput);
}

int main()
{
    std :: function<int()> NewFun = GetInput;
    int limit = 0;

    std :: cout << "Enter size of the vector : ";
    std :: cin >> limit;

    for(int i = 0 ; i < limit ; i++)
    {
        setVectorValues(GetInput);
    }

    getVectorValues();
}

void getVectorValues()
{
    std :: vector<std :: function <int()>>::iterator loop;    
    int arr[array.size()] ;

    // for(loop = array.begin() ; loop != array.end() ; loop++)
    // {
    //     std ::  cout << (*loop)();
    // }

    for(int i = 0; i<array.size() ; i++)
    {
       arr[i] = array.at(i)();
    }

    std :: cout << arr[2];
}
