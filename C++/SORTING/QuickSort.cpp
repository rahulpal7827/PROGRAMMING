#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &nums, int low, int high)
{
    int i = low - 1;
    int pivot = nums[high];
    for (int j = low; j < high; j++)
    {
        if (nums[j] <= pivot)
        {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[high]);
    return i + 1;
}

void quicksort(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int p = partition(nums, low, high);
        quicksort(nums, low, p - 1);
        quicksort(nums, p + 1, high);
    }
}

int main()
{
    vector<int> nums = {4, 2, 5, 2, 7};
    quicksort(nums, 0, (nums.size() - 1));
    cout << "Array after sorted->";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}