#include<iostream>
#include<cmath>
Using nameplace std;
class simplecalculator{
int a,int b;
public:
void getdata(){
cout<<"Enter the value of a"<<endl;
cin<<"a"<<endl;
cout<<"Enter the value of b"<<endl;
cin<<"b"<<endl;
}
void performoperation(){
cout<<"The value of a+b is"<<a+b<<endl;
cout<<"The value of a-b is"<<a-b<<endl;
cout<<"The value of a*b is"<<a*b<<endl;
cout<<"The value of a/b is"<<a/b<<endl;
}
};
------------------------------------------------------------
class scientificcalculator{
int a,int b;
public: 
void getdata(){
cout<<"Enter the value of a"<<endl;
cin<<"a"<<endl;
cout<<>Enter the value of b"<<endl;
cin"b"<<endl;
}
void performoperation(){
cout<<"The value of cos(a) is"<<cos(a)<<endl;
cout<<"The value of sin(a) is"<<sin(a)<<endl;
cout<<"The value of tan(a) is"<<tan(a)<<endl;
cout<<"The value of cosec(a) is"<<cosec(a)<<endl;
}
};

















int main(){
simplecalculator calc;
calc.getdata();
calc.performoperation();
return(0);
};
