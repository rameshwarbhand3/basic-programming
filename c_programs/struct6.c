#include<stdio.h>
#include<string.h>
typedef struct date{
int date;
int year;
int month;
}date;
void display(date d){
printf("The date is %d/%d/%d\n",d.date,d.month,d.year);

}
int main(){
date d1={2,11,20};
date d2={5,10,21};
display(d1);
disply(d2);
return(0);
}
 
