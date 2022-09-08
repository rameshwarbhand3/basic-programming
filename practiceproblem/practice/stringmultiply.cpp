#include<iostream>
#include<string.h>
using namespace std;
string multiply(string a,string b){
    int m=a.size();
    int n=b.size();
    string ans(m+n,'0');
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            int p=(a[i]-'0')*(b[j]-'0')+(ans[i+j+1]-'0');
            ans[i+j+1]=p%10+'0';
            ans[i+j]+=p/10;

        }
    }
    for(int i=0;i<m+n;i++){
        if(ans[i]!='0')
        return ans.substr(i);
    }
    return "0";
    }
    int main(){
        string a="200";
        string b="120";
        cout<<"String multiplication is :"<<multiply(a,b)<<endl;
        return(0);
    }
    

