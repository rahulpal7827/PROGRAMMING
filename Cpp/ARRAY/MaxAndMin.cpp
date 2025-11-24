#include <iostream>
using namespace std;
// MAXIMUM
int max(int a[], int size)
{
    int com = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > com)
        {
            com = a[i];
        }
    }
    return com;
}
// MINIMUM
int min(int a[], int size)
{
    int com = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] < com)
        {
            com = a[i];
        }
    }
    return com;
}
int main()
{
    int size = 4;
    int a[4] = {4, 1, 7, 6};
    int maximum = max(a, size);
    int minimum = min(a, size);
    cout << "the maximim element is ->" << maximum << endl;
    cout << "the minimum element is ->" << minimum << endl;
    return 0;
}
