#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }cout<<endl;

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int count;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] = x)
            {
                count++;
            }
        }
    }
    cout<<endl;
    return(0);
}
