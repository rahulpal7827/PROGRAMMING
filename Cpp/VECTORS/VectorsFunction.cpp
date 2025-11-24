# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
int main(){
    vector<int>a;
    a.push_back(2);
    a.push_back(5);
    a.push_back(4);
    a.push_back(6);
    a.push_back(9);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    sort(a.begin(),a.end());
    cout<<"\nAfter sorting:-";
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    sort(a.rbegin(),a.rend());
    cout<<"\nAfter reverse sorting:-";
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
     }
return 0;}