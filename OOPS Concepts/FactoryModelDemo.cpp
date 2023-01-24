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

class Access
{
    private:
        Shape* shapePtr;

    public:
        Access(int choice)
        {
            if(choice ==1)
                shapePtr = new Circle();
            else if(choice == 2)
                shapePtr = new Rectangle();
            else if(choice == 3)
                shapePtr = new Square();
        }
    Shape* getShape()
    {
        return shapePtr;
    }
};

int main()
{
    Access* accessPtr = new Access(3);
    Shape* shapePtr = accessPtr->getShape();
    shapePtr->Draw();
}





