#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<string>v){
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
//     vector<int>v;
//     v.push_back(2);
//     v.push_back(5);
//    vector<int>v2=v;
//    v2.push_back(9);
//    v.pop_back();
//     print(v);
//     print (v2);
vector<string>v;
int n;
cin>>n;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s);
}
    return(0);

}
