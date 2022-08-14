#include<iostream>
using namespace std;
int data=50;
int data_2=1000;
int*ptr;
ptr=&data;
cout<<"value of *ptr is"<<*ptr<<endl;
int**double_ptr;
double_ptr=&ptr;
*double_ptr=&data_2;
cout<<"value in **double_ptr"<<double_ptr<<endl;
retun(0);
}

