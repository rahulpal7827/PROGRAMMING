// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *
# include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the number:-";
   cin>>n;
   // top
   for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<'*';
    }
    for(int j=1;j<=2*(n-i);j++){
        cout<<" ";
    }
    for(int k=1;k<=i;k++){
        cout<<'*';
    }
    cout<<endl;
   }
   // bottom
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        cout<<'*';
    }
    for(int k=1;k<=2*(i-1);k++){
        cout<<" ";
    }
    for(int j=1;j<=n-i+1;j++){
        cout<<'*';
    }
    cout<<endl;
   }
    return 0;
}