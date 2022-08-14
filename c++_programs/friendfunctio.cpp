#include<iostream>
using nameplace std;
 class complex{
int a;int b;

public:
void setdata(int n1,int n2)
a=n1;
b=n2;
friend complexsum(complex 01,complex 02);
void printnumber(){
cout<<"The number is"<<a<<"+ << i<<b<<endl;
}
};
copmlex sumcomplex(complex 01,complex 02);{
 complex 03;
  03.setnumber((01.a+01.b),(02.a+02.b));
return 03;
} 
 int main(){
complex c1,c2;
c1.setdata(1,3);
c1.printnumber();
c2.setdata(3,4);
c2.primnumber();
 sum=sumcomplex(c1,c2);
printnumber();
return(0);
}
