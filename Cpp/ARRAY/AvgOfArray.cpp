#include <iostream>
using namespace std;
int average(int a[], int);
int main()
{
    int a[] = {32, 33, 43, 54, 23};
    int size;
    size = sizeof(a) / sizeof(a[0]);
    int avg = average(a, size);
    cout << "\nthe average of all elements of array is->" << avg << endl;
    return 0;
}
int average(int a[], int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    int avg;
    avg = sum / size;
    return avg;
}