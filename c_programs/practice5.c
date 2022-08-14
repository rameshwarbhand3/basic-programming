#include<stdio.h>
int factorialrecursive(int n){
if(n==0||n==1){
return 1;
}
else{
return n=n*fac(n-1);
}
int main(){
int n;int factorial;
printf("Enter the value of number for factorial calculation\n");
scanf("%d",&n);
printf("The value of factorial %d\n",factorial);
return(0);
}
