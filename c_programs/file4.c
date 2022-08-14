#include<stdio.h>
int main(){
file *ptr;
char c;
ptr=fopen("getcdemo.txt","r");
c=fgetc(ptr);
while(c!=EOF){
printf("%c",c);
c=fgetc(ptr);
}
return(0);
}
