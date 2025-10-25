// for example 6-> 110
# include <iostream>
using namespace std;
int decimaltobinary(int temp){
    int rem,ans=0;int pow=1;
    while(temp>0){
        rem=temp%2;
        temp/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main (){
    int n;
    cout<<" Entr the number:-";
    cin>>n;
    cout<<decimaltobinary(n);
    return 0;
}



#include <iostream>
using namespace std;

int binarytodecimal(int temp) {
    int rem, ans = 0;
    int pow = 1;  
    
    while (temp > 0) {
        rem = temp % 10;    
        temp /= 10;
        ans += (rem * pow);  
        pow *= 2;            
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << "Decimal: " << binarytodecimal(n);
    return 0;
}