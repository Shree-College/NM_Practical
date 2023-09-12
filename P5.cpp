#include <iostream>
#include <cmath>

#define F(x) ((x * x * x) - 5 * x + 1)
using namespace std;
int main()
{
    float x0, x1, f1, x2, f2, f0;
    cout << "Enter 2 Initial Guesses\n";
    cin >> x0 >> x1;
    f0 = F(x0);
    f1 = F(x1);
    int i = 1;
    while (fabs(F(x2)) > 0.00001)
    {
        x2 = (x0 * f1 - x1 * f0) / (f1 - f0);
        f2 = F(x2);
        cout << "Iteration = " << i << "\tx0= " << f0 << "\tx1= " << f1 << "\tx2= " << x2 << "\tf(x2)= " << f2 << "\n";
        f0 = f1;
        f1 = f2;
        x0=x1;
        x1=x2;
        i++;
    }
    cout << "\nThe root of equation is = " << x2;

    return 0;
}