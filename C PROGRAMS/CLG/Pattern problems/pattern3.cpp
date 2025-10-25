// 1
// 22
// 333
// 4444
// # include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number:-";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int num=i;
//         for(int j=1;j<=i;j++){
//             cout<<num;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// A
// BB
// CCC
// DDDD
# include<iostream>
using namespace std;
int main(){
    int n;
    int a=0;
    cout<<"enter the number:-";
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch='A'+a;
        for(int j=1;j<=i;j++){
            cout<<ch;
        }
        a++;
        cout<<endl;
    }
    return 0;
}