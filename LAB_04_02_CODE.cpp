// лаба 4.2
// варіант 13

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, xp, xk, dx, y, A, B;
    
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(6) << "x" << " |"
    << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while(x <= xk){
        A = 2*abs(x-5);
        if (x < -1)
            B = pow(sin(x),2)/(1+abs(cos(x)));
        else
            if (-1 <= x && x <= 1)
                B = pow(cos(1/abs(x+2)),2);
            else
                B = log(x+2);
        y = A - B;

        cout << "|" << setw(7) << setprecision(2) << x
        << " |" << setw(10) << setprecision(3) << y
        << " |" << endl;
        x += dx;
    }

    cin.get();
    return 0;
}