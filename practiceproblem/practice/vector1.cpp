#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v[])
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "";
    }
    cout << endl;
}
int main()
{
  //Array of vectors.
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
