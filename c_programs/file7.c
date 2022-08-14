#include<stdio.h>
int main(){
File *ptr1;
File *ptr2;
ptr1=fopen("a.txt","r");
ptr2=fopen("b.txt","w");
char c=fgetc(ptr1);
while(c!=Eof){
fputc(c,ptr2);
fputc(,ptr2);
c=fgetc(ptr1);
}
return(0);
}
