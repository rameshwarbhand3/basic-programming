#include<stdio.h>
int main(){
file*ptr;
int num;
int num1;
ptr=fopen("harry.c","r");
if(ptr==Null){
printf("This file does not exist\n");
}
else{

fscanf(ptr,"%d",&num);
fscanf(ptr,"%d",&num1);
fclose(ptr);
printf("The value of num is %d\n",num);
printf("The value of num is %d\n",num1);
}
return(0);
}
