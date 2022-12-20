#include <iostream>

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

        CellPhone(string model, string display, int batteryCapacity, string proce)
        {
            this->model = model;
            this->display = display;
            this->batteryCapacity = batteryCapacity;
            this->processor = processor;
        }
};

int main()
{
    CellPhone cellphone("S21fe", "Amoled", 4000, "Exynios");;

    cout << cellphone.model << endl << cellphone.display << endl << cellphone.batteryCapacity << endl << cellphone.processor << endl;
    
}
