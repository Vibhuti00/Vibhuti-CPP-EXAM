#include <iostream>
#include <string>
using namespace std;
class Shape
{
public:
    virtual void draw() = 0;
};
class Circle : public Shape
{
public:
    float radius, area;

public:
    void draw()
    {
        cout << "Draw The Circle : " << endl;
        area = radius * 3.14;
    }
};
class Rectangle : public Shape
{
public:
    double l, b, area;

public:
    void draw()
    {
        cout << "Draw The Rectangle : " << endl;
        area = l * b;
    }
};
int main()
{
    Rectangle r;
    Circle c;
    return 0;
}
