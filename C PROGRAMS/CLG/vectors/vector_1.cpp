# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector<int> rahul = {1,2,3}; // syntax of vector is vector <datatype> name(size=3 and index=2)
    cout<<rahul[2];
    vector<int> vec(3, 3);//3->size; 3-> value at each index
    for(int i : vec){// i value of vector not index
        cout<<i<<endl;
    }
    return 0;
}