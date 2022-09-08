#include<bits/stdc++.h>
using namespace std;
int main(){
    map<pair<string,string>,vector<int>>m;
    int n;
    cout<<"Enter map size :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        string fn,ln;
        int ct;
        cin>>fn>>ln;
        for(int j=0;j<ct;j++){
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto pair1:m){
        auto full_name=pair1.first;
        auto mark_list=pair1.second;
        cout<<full_name.first<<" "<<full_name.second<<endl;
        for(auto value:mark_list){
            cout<<value<<endl;
        }
    }cout<<endl;
return(0);
}