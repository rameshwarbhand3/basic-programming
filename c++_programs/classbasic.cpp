#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a, int b, int c);
    void getdata()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
void Employee::setdata(int a1, int b1, int c1)
{
    a = a1, b = b1, c = c1;
}
int main()
{
    Employee harry;
    harry.d = 34;
    harry.e = 89;
    harry.setdata(1, 2, 4);
    harry.getdata();
    return (0);
}
