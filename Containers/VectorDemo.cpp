#include <iostream>
#include <vector>
#include <iterator>

using std :: vector;
using std :: cout;
using std :: cin;
using std :: endl;

int main()
{
    vector <int> array = {1 , 2, 3 , 4};
    vector <int> :: iterator i;

    for(i = array.begin() ; i < array.end() ; i++)
    {
        cout << *i<< endl;
    }
}