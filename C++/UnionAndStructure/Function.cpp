#include <iostream>
using namespace std;
// this is called fuction overloading because of arguments
int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    cout << "the sum of 3 and 8 is " << add(3, 8) << endl;
    return 0;
}