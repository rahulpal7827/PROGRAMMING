# include <iostream>
using namespace std;
int main(){
    char n;
    cout<< "Enter the character:-"<<endl;
    cin>>n;
    if (n>=97 && n<=122){
        cout<<"lower case"<<endl;
    } else if(n>=65 &&n<=90){
        cout<<"UPPER CASE"<<endl;
    }
    else{
        cout<<"not an alphabet";
    }
    return 0;
}