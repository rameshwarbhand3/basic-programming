#include <iostream>
#include <vector>
using namespace std;
void print(vector<vector<int>> v)
{
    cout << "main vector size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        vector<int> v1 = v[i];
        cout << i << "th vector size: " << v1.size() << endl;
        for (int j = 0; j < v1.size(); j++)
        {
            cout << v1[j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    vector<vector<int>> v = {{5, 2, 3}, {7, 5, 4}, {6, 1}, {7, 9, 6, 3}};
    print(v);
    cout << endl;
}
