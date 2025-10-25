# include<iostream>
# include<vector>
using namespace std;
class solution{
    public:
    int singlenumber(vector<int>& num){// pass by reference
        int ans=0;
        for(int val : num){
            ans=ans^val;
        }
        return ans;
    }
};