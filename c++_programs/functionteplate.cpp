#include<iostream>
using namespace std;
template <class T>
void addnumber(T a,T b){
cout<<"Addition is ="<<a+b<<endl;
int main()
{
int a,b;
a=10;
b=12;
addnumbers(a,b);
return(0);
}
--------------------------------------------
#include<iostream>
using namespace std;
template<class T>
void sumnumber(T a,T b){
cout<<"subtraction is :"<<a-b<<endl;
int main(){
int a,int b;
a=20;
b=10;
sbstraction (a,b);
return(0);
}
-------------------------------------------------------

#include<ipstream>
using namespace std;
template<class T1,class T2>
void addnumber(T1 a,T2 b){
cout<<"Addition is:"<<a+b<<endl;
}
template<class T1,class T2)>
void multiply(T1 a,T2 b){
cout<<"Multiplication is:"<<a*b>>endl;
}
int main(){
int a=40;
float b=20.50;
addnumber(a,b);
multiply(a,b);
return(0);
}
------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
template<typename T>
class math{
T first ,second;
public:
math(){}
math(T a,T b){
first =a;
second=b;
}
void addnumbers();
void multiply();
};
template<typename T>
void math<T>::addnumbers(){
cout<<"The adition of two numbers is"<<first+second<<endl;
}
template<typename T>
void math<T>::multiply(){
cout<<The multipication of two numbers is"<<first*second<<endl;
}
int main(){
math<double> obj(10,20);
obj.addnumber();
obj.multiply();
return(0);
}
-----------------------------------------------------------------------
#include<iostream>
using namespace std;
template<type T>
class math(){
T first,second;
public:
math{}
math(T a,T b){
first =a;
second =b;
}
void addnumbers();
void multiply();
};
template<typename T>
void math<T>::add numbers(){
cout<<"The addition of two numbers is"<<a+b<<endl;
}
template<typename T>
void math<T>::multiply numbers(){
cout<<"The multiplication of two numbers is"<<a*b<<endl;
}
int main(){
math<double>obj(10.20,0.25);
obj.addnumber();
obj.multiply();
return(0);
}





















































