#include <iostream>

using namespace std;

int main()
{
    int a[10000], median, n = 0, x, even = 0;
    while (cin >> x)
    {
        int i = (n++) - 1; //here n =1

        while (i >= 0 && a[i] > x)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = x;

        median = n / 2;
        if (n % 2)
        {
            cout << a[median] << endl;
        }
        else
        {
            cout << (a[median] + a[median - 1]) / 2 << endl;
        }
    }
}
