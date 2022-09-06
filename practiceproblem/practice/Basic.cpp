#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
     cout<<"size of int is "<<sizeof(int)<<endl;
     cout<<"size of char is "<<sizeof(char)<<endl;
    cout<<"size of long is "<<sizeof(long)<<endl;
     cout<<"size of double  is "<<sizeof(double)<<endl;
    cout<<"size of float is "<<sizeof(float)<<endl;
     cout<<"size of long long int "<<sizeof(long long int)<<endl;
    // vector<string> v;
    // v.push_back("123");
    // v.push_back("qwe");
    // v.push_back("ravi");
    // int n = v.size();
    // cout << "first element " << v[0] << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Vector element are :" << v[i] << endl;
    // }
    // cout << endl;
    // vector<pair<int, char>> alphabets;

    // char ch = 'a';
    // for (int i = 1; i <= 26; i++)
    // {
    //     pair<int, char> pair1;
    //     pair1.first = i;
    //     pair1.second = ch;
    //     alphabets.push_back(pair1);
    //     ch++;
    // }

    // for (int i = 0; i < 26; i++)
    // {
    //     pair<int, char> pair1 = alphabets[i];

    //     cout << pair1.first << ":" << pair1.second << endl;
    // }
    // map<string, vector<string>> classes;
    // classes.insert(pair<string,vector<string>>("FE-Civil",{"Ram","Ravi","Raj"}));
    // classes.insert(pair<string,vector<string>>("SE-Civil",{"Om","Jay","Shiv"}));
    // classes.insert(pair<string, vector<string>>("FE-Civil", {"Ram", "ravi", "Akshay"}));
    // classes.insert(pair<string, vector<string>>("SE-Civil", {"Rams", "ravis", "Akshays"}));
    // classes.insert(pair<string, vector<string>>("TE-Civil", {"Ramesh", "ravikumar", "Akshayraj"}));
    // classes.insert(pair<string,vector<string>>("BE-Civil", {"Ram bhand", "ravi kale", "Akshay bhamare"}));
    // classes.insert(pair<string,vector<string>>(NULL, {"Ram bhand", "ravi kale", "Akshay bhamare"}));
    // for (auto entry : classes)
    // {
    //     vector<string> students = entry.second;
    //     string division = entry.first;
    //     cout<<division <<"-->[";
    //     for(int i=0;i<students.size()-1;i++){
    //         cout<<students[i]<<", ";
    //     }
    //     cout<<students[students.size()-1]<<"]"<<endl;
    // }

    // FE-Civil -->  ["sham bahnd", "ram", "amit"]
    // TE-comp  --> ["abc", "pqr", "xyz"]
    return (0);
}
