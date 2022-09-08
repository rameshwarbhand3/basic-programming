#include <iostream>
#include <set>
using namespace std;
void print(set<string> s)
{
    for (auto value : s)
    {
        cout << value << endl;
    }
}
int main()
{
    set<string> s;
    // int n;
    // cout<<"Enter the size of set"<<endl;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     string str;
    //     cin>>str;
    //     s.insert(str);
    // }cout<<endl;
    s.insert("abc");
    s.insert("pqr");
    s.insert("def");
    s.insert("abc");
    cout << "Element in set are :" << endl;
    print(s);
    return (0);
}