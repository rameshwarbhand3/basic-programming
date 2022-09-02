#include <bits/stdc++.h>
using namespace std;
//set is container which keeps a unique of element in sorted order.
//set<int>>s;
//set<string>>s;
int main()
{
    set<int> s;
    s.insert(4);
    s.insert(1);
    s.insert(10);
    s.insert(3);
    s.erase(s.begin());
    cout << *s.begin() << endl;
    s.insert(-1);
    cout << *s.begin() << endl;
    return (0);
}