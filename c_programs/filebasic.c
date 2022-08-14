#include<stdio.h>
int main(){
file*ptr;
int num;
ptr=fopen("harry.c","rb");
fscanf(ptr,"%d",&num);
printf("The value of num is %d\n",num);
return(0);
}
