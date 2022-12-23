#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    float a = 0, b = 0, c = 0, D = 0, x1 = 0, x2 = 0, rp = 0, ip = 0;
    cout << "enter the coefficients of the quadratic equation" << endl;
    cin >> a;
    cout << endl;
    cin >> b;
    cout << endl;
    cin >> c;
    cout << endl;

    D = pow(b, 2) - (4 * a * c);

    if (D >= 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x1 = (-b - sqrt(D)) / (2 * a);
        cout << "The roots of the equation are: " << x1 << " and " << x2;
    }

    else
    {
        rp = -b / (2 * a);
        ip = sqrt(-D) / (2 * a);

        cout << "The roots of the equation are :" << rp << " +j" << ip << " and " << rp << " -j" << ip;
    }
}
