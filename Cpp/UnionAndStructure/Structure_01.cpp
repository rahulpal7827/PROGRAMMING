#include <iostream>
using namespace std;

typedef struct students
{
    // data storage
    long RollNo;
    char section;
    float marks;
} st;

int main()
{
    st Rahul;
    Rahul.RollNo = 2402320100266;
    Rahul.marks = 14;
    Rahul.section = 'D';
    cout << Rahul.marks << endl;
    cout << Rahul.section << endl;
    cout << Rahul.RollNo;

    return 0;
}