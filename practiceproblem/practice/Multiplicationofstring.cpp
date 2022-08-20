#include <iostream>
#include <string.h>
using namespace std;
int to_int(char ch)
{
    return ch - '0';
}
    string mul(string num1,string num2,int n{
    char multiplier = num2[n];
    string product = " ";
    for (int i = n; i < num2.size() - 1; i++)
        ;
    product += '0';
    int m = num1.size();
    int carry = 0;
    for (int i = m - 1; i >= 0; --i)
    {
        int temp = to_int(num1[i]) * to_int(multiplier) + carry;
        product = to_string(temp % 10);
        carry = temp / 10;
    }
    if (carry > 0)
        product = to_string(carry) + product;
    return product;
    }
    string sum(string first,string second){
    string result = " ";
    int carry = 0;
    int m = first.size();
    int n = second.size();
    while (m > 0 && n > 0)
    {
        int temp = to_int(first[--m]) + to_int(second[--n]) + carry;
        carry = temp / 10;
        result = to_string(temp % 10) + result;
    }
    while (m > 0)
    {
        int temp = to_int(first[--m]) + carry;
        carry = temp / 10;
        result = to_string(temp % 10) + result;
    }
    while (n > 0)
    {
        int temp = to_int(second[--n]) + carry;
        carry = temp / 10;
        result = to_string(temp % 10) + result;
    }

    
    if(carry>0)
         result=to_string(carry)+result;
         return result;
    }
    string multiply(string num1,string num2){
        string product=" ";
        int m=num1.size();
        int n=num2.size();
        if((m==1 || n==1) && (num1[0]=='0'|| num2[0]=='0');
        return to_string(0);
        for(int i=n-1;i>=0;--i){
            string temp=mul(num1,num2,i);
            product=sum(product,temp);
        } 
        return product;
     }
     };
