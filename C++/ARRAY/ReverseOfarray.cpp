#include <iostream>
using namespace std;
void reverse(int a[], int size)
{
    int b[size];
    for (int i = size - 1; i >= 0; i--)
    {
        b[size - i - 1] = a[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << b[i] << " ";
    }
}
int main()
{
    int size = 5;
    int a[] = {1, 2, 3, 4, 5};
    reverse(a, size);
    return 0;
}