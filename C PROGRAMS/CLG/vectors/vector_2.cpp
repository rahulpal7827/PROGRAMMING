# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector<char> alpha={'a','b','c','d'};
    cout<<"size="<<alpha.size()<<endl;//size of vector
    alpha.push_back('e');
    alpha.pop_back();
    for(char i : alpha){
        cout << i<<endl;
    }
    cout<<alpha.front()<<endl;// front element
    return 0;
}