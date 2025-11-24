#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getinput()
    { // getinput function
        cout << "the value of a is" << a << endl;
        cout << "the value of a is" << b << endl;
        cout << "the value of a is" << c << endl;
        cout << "the value of a is" << d << endl;
        cout << "the value of a is" << e << endl;
    }
};

void Employee ::setdata(int a1, int b1, int c1)
{ // set data function
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee rahul;
    rahul.d = 4;
    rahul.e = 23;
    rahul.setdata(1, 2, 4);
    rahul.getinput();
    return 0;
}