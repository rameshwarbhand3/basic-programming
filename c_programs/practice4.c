#include<stdio.h>
int factorialiterative(int n){
int val=1;
int i;
for(i=n;i>1;i--){
val*=i;
}
return val;
}
int main(){
int n;
printf("Enter the value of num for factorial calulation\n");
scanf("%d",&n);
int factorial=factorialiterative( n);
printf("The value of factorial is %d\n",factorial);
return(0);

}

