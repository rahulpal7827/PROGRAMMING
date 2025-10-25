// 1111
//  222
//   33
//    4
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:-";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=0;k<=i;k++){
            cout<<" ";
        }

        for(int j=1;j<=(n-i);j++){
            cout<<(i+1);
    }
    cout<<endl;
 } 
    return 0;
}