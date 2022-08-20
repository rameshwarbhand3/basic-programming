#include<iostream>
using namespace std;
int main(){
    int a,r,b=0;

    cout<<"Enter a number "<<endl;
    cin>>a;
    while(a!=0){
        r=a%10;
        a=a/10;
        b=10*b+r;
    }
    cout<<"reversed number:"<<b<<endl;
    
    return(0);
}