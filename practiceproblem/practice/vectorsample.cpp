#include <bits/stdc++.h>
using namespace std;
//it is a dynamic size  array.Number of element can be increased or decreased.
//vector<int>v;
//vector<<int>v(10);vector of integer with 10 element all 0.
//vector<char>v(10,'h');vector of strings with 10 element all h;
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    cout << v.size() <<endl;

    v.pop_back();
    cout << v.size() << endl;

    cout << v[0] << "" << v[1] << "" << v[2];
    return (0);
}