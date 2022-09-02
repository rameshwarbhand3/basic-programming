#include <bits/stdc++.h>
using namespace std;
//These are special arrays in which the key of element can be negative or very big or even string.
//map<key_datatype,value_datatype>m;
//map<string,int>m;
int main()
{
    map<string, int> freq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (freq[s] == 0)
        {
            cout << "ok" << endl;
        }
        else
        {
            cout << s << freq[s] << endl;
        }
        freq[s]++;
    }
    return (0);
}
