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
};
class Dog : private Animal
{
};
class Cat : private Animal
{
};
int main()
{
    Animal a;
    a.setter();
    a.getter();
    return 0;
}
