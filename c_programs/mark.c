#include<stdio.h>
int main(){
int phy,chem,math;
float total;
printf("Enter phy \n");
scanf("%d",&phy );
printf("Enter chem \n");
scanf("%d",&chem );
printf("Enter math \n");
scanf("%d",&math );
total=phy+chem+math/3;
if ((total<40) || phy<33||chem<33||math<33){
printf("your total is percentage %f and you are fail\n",total);
}
else{
printf("your total is percentage %f and you are pass\n",total);
}
return(0);
}
