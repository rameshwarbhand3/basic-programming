#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<string> v;
    v.push_back("123");
    v.push_back("qwe");
    v.push_back("ravi");
    int n = v.size();
    cout << "first element " << v[0] << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Vector element are :" << v[i] << endl;
    }
    cout << endl;
    return (0);
}