#include<stdio.h>
float force(float mass);
int main();
float m;
printf("Enter the mass\n");
scanf("%f",& m);
printf("The value of force is %f\n", force (m));
return(0);
}
float force(float mass);{
float result= mass*9.8;
return result ;
} 

