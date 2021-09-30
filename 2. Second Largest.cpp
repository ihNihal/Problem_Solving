#include <iostream>
#include <map>
using namespace std;
int main()
{
    int a1[2], a2[2], i;
    for (i = 0; i < 2; i++)
    {
        cin >> a1[i];
    }
    for (i = 0; i < 2; i++)
    {
        cin >> a2[i];
    }

    int count = 0;

    for (i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            while (a1[i] != a2[j])
            {
                count++;
            }
        }
    }

    cout << count << endl;
}
