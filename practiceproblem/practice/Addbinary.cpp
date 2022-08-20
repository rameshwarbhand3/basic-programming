#include<iostream>
#include<string.h>
using namespace std;
string binaryadd(string a,string b){
    string result="";
    int m=a.size()-1;
    int n=b.size()-1;
    int temp=0;
    while(m>=0||n>=0||temp==1){
        temp+=((m>=0)?a[m]-'0':0);
        temp+=((n>=0)?b[n]-'0':0);
        result=char(temp%10+'0')+result;
        temp/=10;
        m--;
        n--;
        }
        return result;
}
int main(){
    string a="1293";
    string b="207";
    cout<<"Addition of sting is :"<<binaryadd(a,b)<<endl;

}
