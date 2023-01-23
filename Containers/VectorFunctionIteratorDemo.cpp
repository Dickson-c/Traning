#include <bits/stdc++.h>
using namespace std;

void func(vector<int> &vect) 
{
    cout << "Enter element : ";
    int a = 0;
    cin >> a;
    vect.push_back(a); 
}

int main()
{
	vector<int> vect;
    vector<int>::iterator loop;

    int size = 0;

    cout << "Enter size of the vector : ";
    cin >> size;

    while(size!=0)
    {
    	func(vect);
        size--;
    }

    for(loop = vect.begin() ; loop != vect.end() ; loop++)
    {
        cout << *loop << endl;
    }
	return 0;
}
