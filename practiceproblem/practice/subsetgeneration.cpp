#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> subsets;
void generate(vector<int> subset, int i, vector<int> nums)
{
    if (i == nums.size())
    {
        subsets.push_back(subset);
    }
    generate(subset, i + 1, nums);
    subset.push_back(nums[i]);
    subset.pop_back();
}
int main()
{
    cout<<"Enter size of vector array :"<<endl;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int>empty;
    generate(empty,0,nums);
    for(auto subset:subsets){
       for(auto element:subset) {
        cout<<element<<"";
       }
       cout<<endl;
    }
}