#include<stdio.h>
#include<strlib.h>
int main(){
int *ptr;
int n;
ptr=(int*) calloc(6*size of(int));
printf("How many integer do you want to store%d\n");
scanf("%d",&n);
for( int i=0;i<6;i++){
print("Enter the value %d element is %d\n",i);
scanf("%d"&ptr[i]);
}
for( int i=0;i<6;i++){
print("The value of %d element is %d\n",i,ptr[i]);
}
return(0);
}
