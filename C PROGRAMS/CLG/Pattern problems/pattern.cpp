// 1234
// 1234
// 1234
// 1234
# include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter:-";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
// ABCD
// ABCD
// ABCD
// ABCD
# include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter:-";
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n;j++){
            cout<<ch;
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}