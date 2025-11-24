#include <iostream>
#include <vector>
using namespace std;
vector<int>SelectionSort(vector<int>&nums,int n){
    for (int i = 0; i < n; i++)
    {
        int min_Index=i;
        int Min_Value=nums[i];
        for (int j = i+1; j < n; j++)
        {
            if (Min_Value > nums[j])
            {
                Min_Value=nums[j];
                min_Index=j;
            }
        }
        nums[min_Index]=nums[i];
        nums[i]=Min_Value;
    }
    return nums;
}
int main()
{
    int n;
    cout << "Enter size:-";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of array:-";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    SelectionSort(nums,n);
     for (int i = 0; i < n; i++)
    {
        cout<< nums[i];
    }
    return 0;
}