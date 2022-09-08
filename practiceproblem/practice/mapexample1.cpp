#include<iostream>
#include<map>
//frequency count and print string in lexiographical order corrosponding frequecy value.
using namespace std;
void print(map<string,int>m){
cout<<"map size :" <<m.size()<<endl;
for(auto pair:m){
    cout<<pair.first<<" "<<pair.second<<endl;
}
}
int main(){
    map<string,int>m;
    int n;
    cout<<"Enter the size "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;

    }
    print(m);
}


