#include <iostream>
using namespace std;
int main()
{
    int n, ans1 = 0, ans2 = 0, fl1, fl2;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 1)
        {
            fl1 == i;
            ans1++;
        }
        else
        {
            fl2 = i;
            ans2++;
        }
    }

    if (ans1 == 1)
    {
        cout << fl1+1;
    }
    else
    {
        cout << fl2+1;
    }
}