#include <iostream>
#include <string>
using namespace std;
class Shape
{
public:
    string shape;

public:
    void draw()
    {
        cout << "Enter The Shape Drawing : ";
        cin >> shape;
    }
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
    Shape *s[2];
    s[0] = new Circle;
    s[1] = new Rectangle;
    return 0;
}
