#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    cout << "Enter the array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array element are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    int sum =0;
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
        
       
    }
     cout <<"Array element sum "<< sum << endl;
    return (0);
}
