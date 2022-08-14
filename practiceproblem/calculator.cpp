#include<iostream>
using namespace std;
void addition(int a,int b);
void substraction(int a,int b);
void multiplication(int a,int b);
void division(int a,int b);

void addition(int a,int b){
    cout<<"a+b is"<< (a+b) <<endl;
}
void substraction(int a,int b){
    cout<<"a-b is"<< (a-b) <<endl;
}
void multiplication(int a,int b){
    cout<<"a*b is"<< (a*b) <<endl;
}
void division(int a,int b){
    cout<<"a/b is"<< (a/b) <<endl;
}
        
int main(){
    char fav;
    int num1,num2,choice;
    cout<<" Enter first number "<<endl;
    cin>>num1;
    cout<<" Enter second number "<<endl;
    cin>>num2;
    do{
        cout<<" 1.addition "<<endl;
        cout<<" 2.substraction "<<endl;
        cout<<" 3.multiplication "<<endl;
        cout<<" 4.Division "<<endl;
        cout<<" Enter your choice "<<endl;
        cin>>choice;
        switch (choice){
            case 1:{
        addition (num1,num2);
        break;
            }
               case2:{
      substraction (num1,num2);
        break;
            }
               case3:{
     multiplication (num1,num2);
        break;
            }
               case4:{
      division (num1,num2);
        break;
            }
            default:{
                cout<<" wrong choice "<<endl;
            }
        }
        cout<<"Do you want to continue?(y/n)"<<endl;
        cin>>fav;
    }while(fav=='y');
   return(0); 
}

    
