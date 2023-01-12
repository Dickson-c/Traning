#include <iostream>
#include <functional>
#include <vector>

class Vector
{
    private:
        std :: vector < std :: function <int()>> array;

    public:
        void setVectorValues(std :: function<int()> ReadInput);
        void getVectorValues();
};

int ReadInput()
{
    int a = 0;
    std :: cin >> a;
    return a;
}

void Vector :: setVectorValues(std :: function<int()>ReadInput) 
{
    array.push_back(ReadInput);
}

void Vector :: getVectorValues()
{
    std :: vector<std :: function <int()>>::iterator loop;

    for(loop = array.begin() ; loop != array.end() ; loop++)
    {
       std ::  cout << (*loop)() << " ";
    }
}

int main()
{
    Vector v;

    int size = 0;
    std :: cout << "Enter size of vector : ";
    std:: cin >> size;

    std :: cout << "Enter vector elements : \n";
    while(size > 0)
    {
        v.setVectorValues(ReadInput);
        size--;
    }
    
    v.getVectorValues();
}
