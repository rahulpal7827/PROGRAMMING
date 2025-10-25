// # include <iostream>
// using namespace std;
// int max(int a[],int size){
//     int maxvalue=a[0];
//     for(int i=0;i<size;i++){
//     if(maxvalue<=a[i]){
//         maxvalue=a[i];
//     }
//   }
//   return maxvalue;
// }
// int main(){
//     int size;
//     cout<<"enter the size of array:";
//     cin>>size;
//     int a[size];
//     cout<<"enter the elements of array:";
//     for(int i=0;i<size;i++){
//         cin>>a[i];
//     }
//     int maximum=max(a,size);
//     cout<<"maximum element of an array is:"<<maximum<<endl;
//     return 0;
// }


# include <iostream>
using namespace std;
int min(int a[], int size){
int minivalue=a[0];
for (int i=0;i<size;i++){
    if(minivalue>=a[i]){
        minivalue=a[i];
    }
 }
 return minivalue;
}
int main(){
    int size;
    cout<<"enter the size of array:";
    cin>>size;
    int a[size];
    cout<<"enter the elements of array:";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }  
    int minimum=min(a,size);
    cout<<"minimum element of an array is:"<<minimum<<endl;
    return 0;
}