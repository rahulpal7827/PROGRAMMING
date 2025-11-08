#include <iostream>
using namespace std;
void reverse(int a[], int size)
{
    int start = 0;
    int end = size - 1;
    int temp;
    while (start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int size = 5;
    int a[] = {1, 2, 3, 4, 5};
    reverse(a, size);
    return 0;
}