// sum of odd numbers
# include <iostream>
using namespace std;
int main(){
    int n;
    int odd_sum=0;
    cout<<"enter the number uoto sum is required:";
    cin>>n;
    for(int i=0;i<=n;i++){
        if (i%2!=0){
            odd_sum+=i;
        }
    }
    cout<<"sum of odd numbers is: "<<odd_sum<<endl;
    return 0;
}