//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *
# include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the number:-";
   cin>>n;
   //TOP
   for(int i=1;i<=n;i++){
    //space
    for(int j=1;j<=(n-i);j++){
        cout<<" ";
    }
    cout<<'*';
     if(i!=1){
        for(int k=1;k<=(2*i)-3;k++){
            cout<<" ";
        }
        cout<<'*';
     }
     cout<<endl;
   }
   //BOTTOM
   for(int i=1;i<n;i++){
    //space
    for(int j=0;j<=(i-1);j++){
        cout<<" ";
    }
    cout<<'*';
    if(i!=(n-1)){
        for(int k=1;k<=(n-(2*i))+1;k++){
            cout<<" ";
        }
        cout<<'*';
    }
    cout<<endl;
   }
    return 0;
}