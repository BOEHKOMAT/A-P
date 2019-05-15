#include <iostream>
using namespace std;

int main()
{
    double b = 1.2;
    double y;
    for(double a = 1; a <= 2; a += 0.5)
    {
        for(double x = 0; x <= 1; x += 0.2)
        {
            y = (4*a*x*x + 37*x + b)/(a - 0.5);
            cout << y << endl;
        }
    }
    return 0;
}