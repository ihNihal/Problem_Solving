#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int q, p;
        cin >> q >> p;
        double total;
        if (q > 1000)
        {
            total = (q * p) * 0.90;
        }
        else
        {
            total = q * p;
        }
        cout << fixed;
        cout << setprecision(6);
        cout << total << endl;
    }
}