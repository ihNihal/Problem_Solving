#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int T, l;
    double w, r;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> l;
        w = (l * 0.6);
        r = (l * 0.2);
        double red = acos(-1) * r * r;
        double green = (l * w) - (acos(-1) * r * r);
        std::cout << std::setprecision(2) << std::fixed;
        cout << red << " " << green << endl;
    }
}