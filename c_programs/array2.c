#include<stdio.h>
void printarray(int *ptr,int n){
for (int i=0;i<n;i++);{
printf("The value of element %d is %d",i+1,*(ptr+i));
}
}
int main(){
int arr[]={1,2,3,4,5};
printarray(arr,5);
return(0);
} 
