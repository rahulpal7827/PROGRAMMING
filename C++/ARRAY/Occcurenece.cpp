#include <iostream>
using namespace std;
int occur(int a[], int size, int target)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == target)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int size = 5;
    int a[5];
    cout << "enter the elements of array:-";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int target;
    cout << "enter the no. of which you want occurence->";
    cin >> target;
    int occurence = occur(a, size, target);
    cout << occurence;
    return 0;
}