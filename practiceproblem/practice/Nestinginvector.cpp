#include <bits/stdc++.h>
using namespace std;
void print(vector<pair<int, int>> v[])
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << "" << v[i].second << endl;
    }
    cout << endl;
}
int main()
{
    // vector<pair<int,int>>v={{2,1},{3,4},{4,5}};
    // print(v);
    // vector<pair<int,int>>v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x,y;
    //     cin>>x>>y;
    //     v.push_back({x,y});
    // }
    // print v();
    int N;
    cin >> N;
    vector<int> v[N];
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++)
{
    print (v[i]);
}    return (0);
}
