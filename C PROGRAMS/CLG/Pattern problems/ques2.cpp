# include <iostream>
using namespace std;
// sum of num from 1 to n
int main(){
int n,sum=0;
cout<< "Enter the number upto which you want sum:-";
cin>>n;
for (int i=1;i<=n;i++){
    sum+=i;
}
cout<<"the sum of number is :-"<<sum<<endl;
    return 0;
}