#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        double r, shaded_area;
        cin >> r;
        shaded_area = (4 * r * r) - (2 * acos(0.0) * r * r);
        cout << fixed;
        cout << setprecision(2);
        cout << "Case " << i  << ": " << shaded_area + pow(10, -9) << endl;
    }
}