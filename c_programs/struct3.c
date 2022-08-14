#include<stdio.h>
#include<string.h>
 typedef struct employee{
int code;
float salary;
char name[10];
};emp
void show(emp,emp1){
printf("The code of employee is %d\n",emp1.code);
printf("The salary of employee is %\n",emp1.salary);
printf("The name of employee is %s\n",emp1.name);
}
int main(){
emp e1;
emp *ptr;
ptr=&e1;
(*ptr).code=100;
(*ptr).salary=10.00;
(*ptr).name="harry";
show e1;
return(0);
}

