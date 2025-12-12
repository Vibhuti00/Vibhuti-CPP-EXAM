#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string name;
    int age, n;
    string address;
    static int value;

public:
    void setpersonDetails(string name, int age, string address)
    {
        cout << "Enter The Name Of Person : ";
        cin >> name;
        cout << "Enter The Number Of Age : ";
        cin >> age;
        cout << "Enter The Address : ";
        cin >> address;
    }
    void getpersonDetails()
    {
        cout << "Enter The Name Of Person : " << name << endl;
        cout << "Enter The Number Of Age : " << age << endl;
        cout << "Enter The Address : " << age << endl;
    }
};
// static Person ::value = 2;
int main()
{
    string name;
    int age, n;
    string address;
    Person p;
    cout << "Enter The Number Of Person : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Person " << i + 1 << " : " << endl;
        p.setpersonDetails(name, age, address);
        p.getpersonDetails();
    }

    return 0;
}
