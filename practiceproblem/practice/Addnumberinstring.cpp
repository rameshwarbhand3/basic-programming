#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

string add(string str1, string str2)
{

    int l1 = str1.length()-1;
    int l2 = str2.length()-1;
    string sum;
    int carry = 0;
    int res = 0;
    while (l1 >= 0 || l2 >= 0)
    {
        int digit1 = l1 < 0 ? 0 : str1[l1] - '0';
        int digit2 = l2 < 0 ? 0 : str2[l2] - '0';

        res = carry + digit1 + digit2;
        if (res >= 10)
        {
            carry = res / 10;
            int val = res % 10;
            sum = sum + to_string(val);
        }
        else
        {
            sum = sum + to_string(res);
        }
        l1--;
        l2--;
    }
    if (carry > 0)
    {
        sum = sum + to_string(carry) ;
    }
    reverse(sum.begin(), sum.end());
    return sum;
}

int main()
{

    string str1 = "999";
    string str2 = "29";
    cout << "Addition is :" << add(str1, str2) << endl;
    return (0);
}