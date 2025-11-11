#include <iostream>
#include <vector>
using namespace std;
void insertsort(vector<int> &nums, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = nums[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (nums[j] > temp)
            {
                nums[j + 1] = nums[j];
            }
            else
            {
                break;
            }
        }
        nums[j + 1] = temp;
    }
    cout << "After sorting->\n";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i];
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter size:-";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of array->";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << "Before sorting:-\n";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i];
    }
    cout << endl;
    insertsort(nums, n);

    return 0;
}