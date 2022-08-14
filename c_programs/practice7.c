#include<stdio.h>
int main(){
int len=0;
char s[]="Harrys";
int temp;
while(s[len]!='\0');
{
prinf("The lengtgh of this string is %d\n",len);
}
for(int i=0;i<(len-1)/2;i++){
temp=s[i];
s[i]=s[len-1-i];
s[len-1-i]=temp;
}
printf("The string now is %d\n",temp);
return(0);
}











