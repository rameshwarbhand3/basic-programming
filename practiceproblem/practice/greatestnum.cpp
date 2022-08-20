#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
      cout<<"Enter second number"<<endl;
    cin>>num2;
    if(num1>num2){
        cout<<"\tnumber is greatest\t"<<num1<<endl;
    }
    else if(num2>num1){
        cout<<"number is greatest\t"<<num2<<endl;
    }
    else {
        cout<<"number are equal"<<endl;
    }
    return(0);

}