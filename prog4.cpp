#include <iostream>
#include <string>
using namespace std;
class Animal
{
private:
    string name;
    string sound;

public:
    void setter()
    {
        cout << "Enter The Name Of Animals : ";
        cin >> name;
        cout << "Enter The Sound Of Animals : ";
        cin >> sound;
    }
    void getter()
    {
        cout << "Enter The Name Of Animals : " << name << endl;
        cout << "Enter The Sound Of Animals : " << sound << endl;
    }
    virtual void displayDetails()
    {
    }
};
class Dog : private Animal
{
public:
    void dogs()
    {
        cout << "Dogs Are Barking" << endl;
    }
};
class Cat : private Animal
{
public:
    void cats()
    {
        cout << "Cats Are Meow" << endl;
    }
};
int main()
{
    Animal a;
    a.setter();
    a.getter();
    a.displayDetails();
    return 0;
}
