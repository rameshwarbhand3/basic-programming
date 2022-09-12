#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "ABC";
    m[2] = "DEF";
    m[3] = "GHI";
    m[4] = "JKL";
    m[1] = "123";
    m.insert({5, "abc"});
    m.erase(3);
    m.find(1);
    // for(auto &pair:m){
    //     cout<<pair.first<<" "<<pair.second<<endl;
    // }
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (it->first) << " " << (it->second) << endl;
    }
 
    return (0);
}
