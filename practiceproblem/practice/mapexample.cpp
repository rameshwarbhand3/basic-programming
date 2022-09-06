#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    map<string, vector<string>> classes;
    classes.insert(pair<string,vector<string>>("FE-Civil",{"Ram","Ravi","Raj"}));
    classes.insert(pair<string,vector<string>>("SE-Civil",{"Om","Jay","Shiv"}));
    classes.insert(pair<string, vector<string>>("FE-Civil", {"Ram", "ravi", "Akshay"}));
    classes.insert(pair<string, vector<string>>("SE-Civil", {"Rams", "ravis", "Akshays"}));
    classes.insert(pair<string, vector<string>>("TE-Civil", {"Ramesh", "ravikumar", "Akshayraj"}));
    classes.insert(pair<string,vector<string>>("BE-Civil", {"Ram bhand", "ravi kale", "Akshay bhamare"}));
   

    for (auto entry : classes)
    {
        vector<string> students = entry.second;
        string division = entry.first;
        cout<<division <<"-->[";
        for(int i=0;i<students.size()-1;i++){
            cout<<students[i]<<", ";
        }
        cout<<students[students.size()-1]<<"]"<<endl;
    }
    return(0);

}

