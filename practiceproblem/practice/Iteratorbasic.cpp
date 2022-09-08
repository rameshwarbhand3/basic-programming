#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    cout << "size is :" << v.size() << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // vector<int>::iterator it = v.begin();
    // cout << (*it) << endl;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (*it) << endl;
    // }
    // iterator using vector pair
    vector<pair<int, int>> v1 = {{1, 2}, {3, 5}, {5, 6}};
    // cout << "size is :" << v1.size() << endl;
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1[i].first << " " << v1[i].second << endl;
    // }
    // cout << endl;
    vector<pair<int, int>>::iterator it1 = v1.begin();
    for (it1 = v1.begin(); it1 != v1.end(); it1++)
    {
        cout << (it1->first) << " " << (it1->second) << endl;
    }
    cout << endl;
    for (int value : v)
    {
        cout << value << "  ";
    }
    cout << endl;
    for(pair<int,int> value:v1){
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;
    
    for(auto value:v1){
        cout<<value.first<<"" <<value.second<<endl;
    }
//check size and capacity.
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);

    cout << "size of vector" << vec.size() << endl;
    cout << "capacity of vector" << vec.capacity() << endl;
    return 0;
    
    return (0);
}
