#include<stdio.h>
int main(){
File*ptr;
int num;
printf("Enter the integer you need the table of\n");
scanf("%d",&num);
ptr=fopen("Table.txt","w");
for(int i=0,i<10;i++){
fprintf(ptr,"%d x %d=%d",num,i+1,num*(i+1));
}
fclose(ptr);
return(0);
}


