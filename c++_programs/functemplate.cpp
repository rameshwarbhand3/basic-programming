#include<iostream>
using namespace std;
int funaverage(int a,int b)
{
float avg=(a+b)/2.0;
return avg;
}
int main(){
float a;
a=funaverage(5,2);
printf("The average is %.2f\n",a);
return(0);
}
