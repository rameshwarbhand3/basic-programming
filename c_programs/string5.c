#include<stdio.h>
int main(){
char str1[40]="Hello";
char *str2="i am harry";
strcat(str1,str2);
printf("Now the str1 is %s",str1);
return(0);
}
