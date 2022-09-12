#include <bits/stdc++.h>
#include<vector>
using namespace std;
vector<string>valid;
void generate(string &s, int close, int open)
{
    if (open == 0 && close == 0)
    {
        valid.push_back(s);
        return;
    }
    if (open > 0)
    {
        s.push_back('(');
        generate(s, close, open - 1);
        s.pop_back();
    }
    if (close > 0)
    {
        if (open < close)
        {
            s.push_back(')');
            generate(s, close, close - 1);
            s.pop_back();
        }
    }
}
int main()
{
    cout << "Enter size :";
    int n;
    cin >> n;

    string s;
    generate(s, n, n);
    for (auto element : valid)
    {
        cout << element << "";
    }
    return (0);
}
