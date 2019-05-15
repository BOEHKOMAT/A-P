#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double R, r, h;
    cout << "Enter R, r, h:";
    cin >> R >> r >> h;
    double Pi = 3.14;
    double l = sqrt(pow(h,2) + (R - r));
    double S = Pi*(R + r)*l + Pi*pow(R,2) + Pi*pow(r,2);
    double V = (Pi*(pow(R,2) + pow(r,2) + R*r)*h)/3;
    cout << "Square: " << S << "\nVolume: " << V << endl;
    return 0;
}
