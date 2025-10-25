// To check if a number is prime or not
# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:-";
    cin>>n;
    int count=0;
    for(int i=0; i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"Prime number";
    }
    else{
        cout<<"coprime number";
    }
    return 0;
}