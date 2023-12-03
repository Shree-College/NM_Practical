#include <iostream>
#include <cmath>
using namespace std;
int x[10];
int y[10];
float len = 0, m, n;
float SumY = 0, SumX = 0, SumXY = 0, SumX2 = 0, a, b;
void fun()
{
    cout << "Enter the value of Y parameter:\n";
    for (int i = 0; i < len; i++)
    {
        cin >> m;
        y[i] = m;
        SumY = SumY + y[i];
    }
    cout << "Enter the value of X parameters:\n";
    for (int i = 0; i < len; i++)
    {
        cin >> n;
        x[i] = n;
        SumX = SumX + x[i];
        SumX2 = SumX2 + (x[i] * x[i]);
    }
    for (int i = 0; i < len; i++)
    {
        SumXY = SumXY + y[i] * x[i];
    }
    b = (SumXY - (SumY * SumX) / len) / (SumX2 - ((SumX * SumX) / len));
    a = (SumY - b * SumX) / len;
}
int main()
{
    cout << "Enter the no of observations\n";
    cin >> len;
    fun();
    cout << "The Linear Equation in terms of Y and X is:\n\n";
    cout << "Y = " << a << " + " << b << "X";
    return 0;
}