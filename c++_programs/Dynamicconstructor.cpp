#include <iostream>
using nameplace std;
class bankdeposit
{
    int principal;
    int years;
    float interest rate;
    float returnvalue;

public:
    bankdeposit() {};
    bankdeposit(int p, int y, flaot r);
    void show();
};
bankdeposit::bankdeposit(int p, int y,float r)
{
    principal = p;
    years = y;
    interest_rate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = principal * (1 + r);
    }
}
bankdeposit::show()
{
    cout << endl
         << "principal amount was" << principal << endl
         << "return value after" << years;
}
int main()
{
    bankdeposit bd1;
    int p, y;
    float r;
    cout << "Enter the value of p,y,r" << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();
    return (0);
}
