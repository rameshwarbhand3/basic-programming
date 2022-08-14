#include<stdio.h>
int main(){
int a,b,c;
file *ptr;
ptr=fopen("pr01.txt""r");
fscanf(ptr,"%d %d %d",&a,&b,&c);
printf("The value of integer is %d %d %d",a,b,c);
return(0);
}
