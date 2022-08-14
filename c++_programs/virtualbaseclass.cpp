#include<iostream>
using nameplace std;
class Student{
protected:
int roll_no;
public:
void set_no(int a){
roll_no=a;
};
void print_no(void){
cout<<"your roll no is"<<roll_no<<endl;
}
};
------------------------------------------------------
class test:virtual public student{
protected:
float maths,physics;
public:
void set__marks(float m1,float m2){
math=m1;
physics=m2;
}
void print_marks(void){
cout<"The marks in math is"<<m1<<endl;
cout<<"The marks in physics is"<<m2<<endl;
}
};
--------------------------------------------------------
class sport:virtual public student{
protected:
float score;
public:
void set_score(float sc){
score=sc;
}
void print_score(void){
cout<<"Your score is"<<score<<endl;
}
};
------------------------------------------------------------
class result:public test,public sport{
private:
float total;
public:
void display(void){
total=math+physics+score;
print_n0();
print_marks();
print_score();
cout"<<your total score"<<total<<endl;
}
};
---------------------------------------------------------------
int main(){
resut harry;
harry.set_rollno(10_);
harry.set_marks(50,60);
harry.set_score(9);
harry.display();
return(0);
}


























