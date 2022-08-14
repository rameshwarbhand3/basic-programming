#include<iostream>
usng nameplace std;
class complex{
int a,int b;
public:
complex(int,int);
void printnumber(){
cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
}
};
complex:complex(int x,int y){
a=x;
b=y;
}
int main(){
complex a(4,6);
complex b(3,5);
a.printnumber();
b.printnumber();
return(0);
}

---------------------------------------------------------------------------------
#include<iosteam>
using nameplace std;
class point{
int x,int y;
public:
point(int a,int b){
x=a;y=b;
}
void displaynumber(){
cout<<"The point is("<<x<<"y<<")"<<endl;
}
};
int main(){
point p(1,2);
p.displaynumber();
point q(2,3);
q.displynumber();
return(0);
}













