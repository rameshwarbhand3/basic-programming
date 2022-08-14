#include<stdio.h>
int main(){
int mul[3][10];
for(int i=0;i<10;i++){
mul[0][i]=2*(i+1);
}
for(int i=0;i<10;i++){
printf("2*%d/n",i+1,mul[0][i]);
}
return(0);
}
