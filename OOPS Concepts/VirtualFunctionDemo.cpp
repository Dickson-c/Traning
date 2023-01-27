#include <iostream>

using std :: cout;
using std :: cin;
using std :: endl;

class Shape
{
    public:
      virtual void Draw()
        {
            cout << "Shapes are drawn" << endl;
        }
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
       virtual void Draw()
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
    Shape* shapePointer = new Square();

    // Circle circle;

    // shapePointer = &circle;

    shapePointer->Draw();

    delete(shapePointer);
    //cout << sizeof(Shape);
}
