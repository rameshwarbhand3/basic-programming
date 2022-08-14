#include<iostream>
using namespace std;
int add(int a,int b){ 
int c;
c=a+b;
return c;
}
int main(){
int a,b;
cout<<"Enter the value of a"<<endl;
cin>>a;
cout<<"Enter the value of b"<<endl;
cin>>b;
cout<<"The adition of two number"<<add(a,b)<<endl;
return(0);
}

