# include <iostream>
using namespace std;
# include<vector>
int removeeelment(vector<int>&nums,int value){
    int i=0;
    int j=0;
    int n= nums.size();
    while(j<n){// [3,4,3,2,5] 3
        if(nums[j]!=value){
            nums[i]=nums[j];
            i++;
        }
        j++;
    }
    return i;
}
int main(){
    vector<int>nums(5);
    cout<<"enter element";
    for (int i = 0; i < 5; i++)
    {
        cin>>nums[i];
    }
    int value=3;
    int ans=removeeelment(nums,value);
    cout<<ans;

return 0;}