#include <iostream>
#include <thread>

class Sum
{
    public :
        void operator()(std :: string name)
        {
            std :: cout <<  name << "\n";
        }
};

void  DisplayStatement2(std :: string name)
{
   std ::cout <<  name << "\n";
}

int main()
{

    std :: string name1;
    std :: string name2;

    std :: cout << "Enter name for statement 1 : " ;
    std :: cin >> name1;
    std :: cout << "Enter name for statement 2 : " ;
    std :: cin >> name2;

    std :: thread th1(Sum() , name1);
    std :: thread th2(DisplayStatement2 , name2);

    th2.join();
    th1.join();
}
