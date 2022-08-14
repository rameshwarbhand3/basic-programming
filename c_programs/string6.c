#include<stdio.h>
int occurrence(char st[],char c){
char *ptr=st;
int count=0;
while(*ptr!='\0'){
if(*ptr==c){
count++;
}
ptr++;
}
return count;
}
int main(){
char st[]="Harry";
int count=occurrence(st,"'r');
printf("occurenes=%d",count);
return(0);
}
