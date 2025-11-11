// #include <iostream>
// #include <vector>
// using namespace std;
// void BubbleSort(vector<int> &nums)
// {
//     int n = nums.size();
//     for (int pass = 1; pass < n; pass++)
//     {
//         for (int i = 0; i < n - pass; i++)
//         {
//             if (nums[i] > nums[i + 1])
//             {
//                 swap(nums[i], nums[i + 1]);
//             }
//         }
//     }
//     cout<<"Array after sorting->";
//     for (int i = 0; i < n; i++)
//     {
//         cout << nums[i];
//     }
//     return;
// }
// int main()
// {
//     vector<int> nums(5);
//     int n = nums.size();
//     cout << "Enter the elements:-";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }
//     BubbleSort(nums);
//     return 0;
// }

//========Optimised form==========
#include <iostream>
#include <vector>
using namespace std;
void BubbleSort(vector<int> &nums)
{
    int n = nums.size();
    for (int pass = 1; pass < n; pass++)
    {
        bool flag = false;
        for (int i = 0; i < n - pass; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                swap(nums[i], nums[i + 1]);
                flag = true;
            }
        }
        if (flag == false)
        {
            cout << "Array is already sorted.->";
            break;
        }
    }
    cout << "Array after sorting->";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i];
    }
    return;
}
int main()
{
    vector<int> nums(5);
    int n = nums.size();
    cout << "Enter the elements:-";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    BubbleSort(nums);
    return 0;
}
