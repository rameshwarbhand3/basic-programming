#include<stdio.h>
int main(){
int num1,num2,num3,num4;
printf("Enter 1st number\n");
scanf("%d",&num1);
printf("Enter 2nd number\n");
scanf("%d",&num2);
printf("Enter 3rd number\n");
scanf("%d",&num3);
printf("Enter 4th number\n");
scanf("%d",&num4);
if(num1>num2&&num1>num3&&num1>num4){
printf("%d is greatest number",num1);
}
else if(num2>num1&&num2>num3&&num2>num4){
printf("%d is greatest number",num2);
}
else if (num3>num1&&num3>num2&&num3>num4){
printf("%d is greatest number",num3);
}
else if(num4>num1&&num4>num2&&num4>num3){
printf("%d is greatest number",num4);
}
return(0);
}
