#include <iostream>
#include <string>
using namespace std;
class Book
{
public:
    string title;
    string authorname;
    int publishyear;

public:
    void setBook()
    {
        cout << "Enter The Name Of Book : ";
        cin >> title;
        cout << "Enter The Name Author : ";
        cin >> authorname;
        cout << "Enter The Publish Year : ";
        cin >> publishyear;
    }
    void getBook()
    {
        cout << "Enter The Name Of Book : " << title << endl;
        cout << "Enter The Name Of Author : " << authorname << endl;
        cout << "Enter The Publish Year : " << publishyear << endl;
    }
};
int main()
{
    Book bk[2];
    bk[2].setBook();
    bk[2].getBook();
    return 0;
}
