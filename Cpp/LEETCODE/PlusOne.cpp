#include <iostream>
#include <vector>
using namespace std;
vector<int> plusone(vector<int> &nums)
{
    int n = nums.size();
    for (int i = n-1; i >= 0; i--)
    {
        if (nums[i] < 9)
        {
            nums[i]++;
            return nums;
        }
        nums[i] = 0;
    }
    nums.insert(nums.begin(), 1);
    return nums;
}
int main()
{
    vector<int> nums(5);
    int n = nums.size();
    cout << "enter->";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> ans = plusone(nums);
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i];
    }
    return 0;
}