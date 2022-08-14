#include<stdio.h>
float average (int a,int b,int c);
int main(){
int a=1; int b=2; int c=3;
printf("The avg of three num %f\n",(a,b,c));
return(0);
}
float average (int a ,int b,int c){
float result;
result =(a+b+c)/3;
return result;
}


