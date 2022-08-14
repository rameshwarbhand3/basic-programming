#include<stdio.h>
int main(){
int n=34;
int isprime=1;
for(int i=2;i*i<n;i++);
{
if(n%2==0){
isprime=0;
}
}
if(isprime){
printf("The number is %d prime\n",n);
}
else{
printf("The number %d is not prime\n",n);
}
return(0);
}
