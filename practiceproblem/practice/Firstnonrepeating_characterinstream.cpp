#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    string firstnonrepeating(string A)
    {
        map<char, int> m;
        string ans = "";
        queue<char> q;
        for (int i = 0; i < A.length(); i++)
        {
            char ch = A[i];
            q.push(ch);
            m[ch]++;
            while (!q.empty())
            {
                if (m[q.front()] > 1)
                {
                    q.pop();
                }
                else
                {
                    ans.push_back(q.front());
                    break;
                }
            }
            if (q.empty())
            {
                ans.push_back('#');
            }
        }
        return ans;
    }
};
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string A;
        cin >> A;
        solution obj;
        string ans = obj.firstnonrepeating(A);
        cout << ans << "\n";
    }
    return (0);
}