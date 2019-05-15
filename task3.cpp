#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
    double Pi = 3.14;
    double r, h;
    cout << "Calculation of cylinder volume." << endl;
    cout << "Enter the initial data:" << endl;
    cout << "radius of the base(sm) > ";
    cin >> r;
    cout << "cylinder height (sm) > ";
    cin >> h;
    double V = Pi*pow(r,2)*h;
    cout << "Cylinder volume " << V << " sm.cub. " << endl;
    cout << "To end, press the key <Enter>";
    getch();
    return 0;
}
