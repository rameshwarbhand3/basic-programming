#include<iostream>
using nameplace std;
class shop{
int id;
float price;
public:
void setdata(int a,float b){
id=a;
price=b;
}
void getdata(void){
cout<<"id of this item is"<<id<<endl;
cout<<"price of this item is"<<price<<endl;
}
};
int main(){
int size=3;
shop*ptr=new shop[size];
shop*ptrtemp=ptr;
int p,int i;
float q;
for(<int i=0;i<3;i++){
cout<<"Enter id and price of item"<<i+1<<endl;
cin>>p>>q;
ptr->setdata(p,q);
ptr++;
}
for(int i=0;i<3;i++){
cout<<"Item no"<<i+1<<endl;
ptr->getdata();
ptr++;
}
return(0);
}

