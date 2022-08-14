#include<stdio.h>
int main()
{
int rating;
printf("Enter your rating(1-5)\n");
scanf("%d",&rating);
switch(rating){
case1:
printf("your rating is 1\n");
break;
case2:
printf("your rating is 2\n");
break;
case3:
printf("your rating is 3\n");
break;
case4:
printf("your rating is 4\n");
break;
case5:
printf("your rating is 5\n");
break;
default:
printf("invaid rating\n");
break;
}
return(0);
}
