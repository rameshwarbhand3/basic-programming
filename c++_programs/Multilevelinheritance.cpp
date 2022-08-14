#include<iostream>
using nameplace std;
class Student{
protected:
void set_rollno(int);
void get_rollno(void);
};
void student:set_rollno(int r){
roll number=r;
}
void student:get_rollno(){
cout<<"The roll number is"<<rollno<<endl;
}
-------------------------------------------------------
class exam{
protected:
float math;
float physics;
public:
void set_marks(int);
void get_marks(void);
};
void exam:set_marks(int m1;int m2){
math=m1;
physics=m2;
}
void student:get_marks(){
cout<<"The marks obtained in physics are"<<m1<<endl;
cout<<"THE MARKS OBTAINED IN math are"<<m2<<endl;
}
--------------------------------------------------------
class result{
public:
float percentage;
protected:
void display(){
cout<<"Your percentage is"<<(math+phyusics)/2<<endl;
get_rollno();
get_marks();
cout<<"Your percentage is"<<rollno<<endl;
}
};
-------------------------------------------------------
int main(){
result harry;
harry.set_rollno(100);
harry.set_marks(94,90);
harry.display results();
return(0);
}














