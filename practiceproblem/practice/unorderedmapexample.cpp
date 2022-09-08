#include<iostream>
#include<unordered_map>
//frequency count and print string in lexiographical order corrosponding frequecy value.
using namespace std;
void print(unordered_map<string,int>m){
cout<<"map size :" <<m.size()<<endl;
for(auto pair:m){
    cout<<pair.first<<" "<<pair.second<<endl;
}
}
int main(){
    unordered_map<string,int>m;
    int n;
    cout<<"Enter the size "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;

    }
    print(m);
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
    print(m);
    return(0);
}


