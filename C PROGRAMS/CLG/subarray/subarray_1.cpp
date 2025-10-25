// let (1,2,3,4,5) be the array and then the sub array will be {1,2,3,4,5}-> for 1 element ,
// {12,23,34,45}-> for 2 element ,{123,234,345}-> for 3 elements ,{1234,2345}-> for 4 elements,
// {12345}-> for 5 elements.
 // formula for sub array is n*(n+1)/2
 # include<iostream>
 # include <vector>
 using namespace std;
 int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    for(int st=0;st<n; st++){
        for(int end =st; end<n;end++){
            for(int val=st;val<=end;val++){
                cout<<arr[val];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
 }