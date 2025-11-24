#include <iostream>
#include <vector>
using namespace std;
int removedup(vector<int> &nums)
{
    int n = nums.size();
    int i = 0;
    int j = 1;
    while (j < n)
    {
        if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
        j++;
    }
    return i+1;
}
int main()
{
    vector<int> nums(10);
    cout << "Enter the elements of array:-";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }
    int ans = removedup(nums);
    cout<<ans;
    return 0;
}