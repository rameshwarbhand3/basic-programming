#include<stdio.h>
#include<string.h>
struct employee{
int code;
float salary;
char name[20];
}
int main(){
struct employee harry={100,34.50,"Harry"};
printf("code is %d\n",harry,code);
printf("salary is %f\n"harry,salary);
printf("Name is %s\n",harry,name);
return(0);
}
