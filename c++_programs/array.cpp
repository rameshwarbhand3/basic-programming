#include<iostream>
using namespace std;
int main(){
int marks[6];
for(int i=0;i<6;i++){
cout<<"Enter the mark of ith student"<<marks[i]<<endl;
cin>>marks[i];
}
for(int i=0;i<6;i++){
cout<<"The marks of ith student"<<marks[i]<<endl;
}
return(0);
}
