#include<iostream>
using namespace std;
template<class T>
class harry{
public:
T data;
harry(T a){
data=a;
}
void display();
};
template<class T>
void harry<T>::display(){
cout<<data;
}
void fun(int  a){
cout<<"I am function"<<a<<endl;
}
template<class T>
void fun1(T a){
cout<<"I am tempatised fun()"<<endl;
}
int main(){
harry<float>h(5,7);
cout<<h.data<<endl;
fun(4);
h.display();
return(0);
}
