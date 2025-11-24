#include <iostream>
using namespace std;
int add(int a[], int s);
int main()
{
    int s;
    cout << "enter the size of array:-";
    cin >> s;
    int a[s];
    cout << "\nenter the value of array:-";
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < s; i++)
    {
        cout << a[i]<<endl;
    }
    int sum = add(a, s);
    cout << "\nthe sum of all elements of array is->" << sum << endl;
    return 0;
}
int add(int a[], int s)
{
    int sum = 0;
    for (int i = 0; i < s; i++)
    {
        sum += a[i];
    }
    return sum;
}