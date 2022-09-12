#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
class solution
{
public:
    string longestcommonprefix(vector<string> &strs)
    {
        int min = 100000;
        int n = strs.size();
        string ans = "";
        if (n == 0)
        {
            return "";
        }
        if (n == 1)
        {
            return strs[0];
        }

        for (int i = 0; i < n; i++)
        {
            int size = strs[i].size();
            if (min < size)
            {
                min = size;
            }
        }

        for (int i = 0; i < min; i++)
        {
            char c = strs[0][i];
            for (int j = 1; j < n; j++)
            {
                if (c != strs[i][j])
                {
                    return ans;
                }
            }
            ans += c;
        }

        return ans;
    }
};

int main()
{
    solution obj;
    vector<string> vec;
    vec.push_back("Ram");
    vec.push_back("Ramesh");
    vec.push_back("Rameshwar");
    cout << obj.longestcommonprefix(vec) << "";
    return (0);
}
