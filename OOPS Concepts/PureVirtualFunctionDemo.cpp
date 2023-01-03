#include <iostream>

using std :: cout;
using std :: cin;
using std :: endl;

class Shape
{
    public:
        virtual void Draw() = 0;
};

class Line : public Shape
{
    public:
        void Draw()
        {
            cout << "line is drawn" << endl;
        }
};

class Circle : public Shape
{
    public:
        void Draw()
        {
            cout << "Circle is drawn" << endl;
        }
};

class Square : public Shape
{
    public:
        void Draw()
        {
            cout << "Square is drawn" << endl;
        }
};

class Rectangle : public Shape
{

    public:
        void Draw()
        {
            cout << "Rectangle is drawn" << endl;
        }
};

int main()
{
    Rectangle rectangle;

    Shape *ptr = & rectangle;

    ptr->Draw();
    cout << sizeof(Rectangle);
}
