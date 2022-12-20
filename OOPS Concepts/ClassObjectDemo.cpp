#include <iostream>
#include <string>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

class CellPhone
{
    public:
        string model;
        string display;
        int batteryCapacity;
        string processor;
};

int main()
{
    CellPhone cellphone;

    cin >> cellphone.model;
    cin >> cellphone.display;
    cin >> cellphone.batteryCapacity;
    cin >> cellphone.processor;

    cout << "Model : " << cellphone.model << endl << "Display : " << cellphone.display << endl << cellphone.batteryCapacity << endl << cellphone.processor << endl;
}
