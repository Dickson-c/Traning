#include <iostream>
#include <vector>
#include <functional>

using namespace std;

int Values()
{
    int a , b;
    cin >> a;
    cin >> b;
    return a + b;
}

int main()
{
    vector <function<int>> array;

    function<int()> Fun = Values;

    vector <int> :: iterator loop;

    int size = 0;
                           
    cout << "Enter size : ";
    cin >> size;

    for(int i = 0 ; i < size ; i++)
    {
        array.push_back(Fun);
    }
}
