//call by value 
#include<stdio.h>
int ten_times(int a);
int main(){
int a=7;
int c;
c= 10*(a);
printf("The ten times of a is %d\n",c);
return(0);
}
int ten_times(int a){
int temp;
temp=10*(a);
return temp;
}


