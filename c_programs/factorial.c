#include<stdio.h>
int factorial(intx);
int main(){
int a=3;
printf("The value of factorial %d is %d",a,factorial (a));
return(0);
}
int factorial(intx){
if (x==1||x==0){
return 1;
}
else{
return x*factorial(x-1);
}
}
