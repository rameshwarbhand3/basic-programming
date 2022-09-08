#include<iostream>
#include<unordered_set>
using namespace std;
void print(unordered_set<int>s){
    cout<<"size of set is :"<<s.size()<<endl;
    for(auto value:s){
        cout<<value<<endl;
    }
}
int main(){
    unordered_set<int>s;
    s.insert(123);
    s.insert(456);
    s.insert(123);
    s.insert(234);
    s.erase(234);
    print(s);
    return(0);


}
