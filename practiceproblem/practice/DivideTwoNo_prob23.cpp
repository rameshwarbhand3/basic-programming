#include <iostream>
#include <climits>
using namespace std;
class Solution
{
public:
    long long divide(long long dividend, long long int divisor)
    {
        long long sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
        dividend = abs(dividend);
        divisor = abs(divisor);
        long long quotient = 0;
        while (dividend >= divisor)
        {
            dividend -= divisor;
            ++quotient;
        }
        cout << "test1 " << quotient << endl;
        if (quotient <= INT_MIN|| sign==-1)
        {
            quotient = INT_MIN;
            cout << "inside if " << quotient << endl;
        }
        else if (quotient >= INT_MAX)
        {
            quotient = INT_MAX;
            cout << "inside else if " << quotient << endl;
        }
        return quotient * sign;
    }
};
int main()
{
    Solution obj;
    long long dividend = -2147483648;
    long long divisor =  - 1;
    cout << "result is :" << obj.divide(dividend, divisor) << endl;
    return (0);
}