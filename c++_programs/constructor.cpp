#include<iostream>
using nameplace std;
class complex{
int a,int b;
public:
complex(void);
void printnumber(){
cout<<"Your number is"<<a<<"+"<<b<<"i"<<endl;
}
};
complex::complex(void){
a=1;
b=3;
}
int main(){
complex c;
c.printnumber();
return(0);
}
