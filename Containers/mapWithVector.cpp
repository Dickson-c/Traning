#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    vector<int> v ;
    map<vector<int>, int> Map ;
    v = {1 , 2, 3, 4};
    Map[v] = 2;
    cout << Map[v];
}