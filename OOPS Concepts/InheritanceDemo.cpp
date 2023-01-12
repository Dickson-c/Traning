#include <iostream>
using std :: cout;
using std :: cin;
using std :: string;
using std :: endl;
class Student
{
    public :
        string city;
        int standard;

    string City()
    {
        Student student ;
        cin >> student.city ;
        return student.city ;
    }

    int Standard()
    {
        Student student ;
        cin >> student.standard ;
        return student.standard ;
    }
};

class Primary : public Student
{
    public :
        string primaryName;
        int primaryRollNumber;
};
int main()
{
    Primary primary;
    string city = "";
    int standard = 0;

    cin >> primary.primaryName >> primary.primaryRollNumber;
    city = primary.City();
    standard = primary.Standard();

    cout << "Student name is " << primary.primaryName << " , whose roll number is " << primary.primaryRollNumber << " , is studing in " << standard << "th standard & living in " << city << endl;
    return 0;
}
