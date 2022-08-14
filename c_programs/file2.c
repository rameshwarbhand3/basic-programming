#include<stdio.h>
int main(){
file*ptr;
int num=10;
ptr=fopen("generated.txt","w");
fprintf(ptr,"The number is %d",num);
fclose(ptr);
return(0);
}
