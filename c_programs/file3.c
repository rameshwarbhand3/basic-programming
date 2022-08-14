#include<stdio.h>
int main(){
file*ptr;
ptr=fopen("edit.txt","r");
char c=fgetc(ptr);
printf("The value of my character is %c\n",c);
return(0);
}


















