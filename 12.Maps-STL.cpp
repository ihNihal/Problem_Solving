#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    map<string, int> m;
    int q;
    cin >> q;
    string x;

    int y;

    for (int i = 0; i < q; i++)
    {
        int type;
        cin >> type;

        switch (type)
        {
        case 1:
            cin >> x >> y;
            if (m.find(x) == m.end())
            {
                m.insert(make_pair(x, y));
            }
            else
            {
                m[x] += y;
            }
            break;

        case 2:

            cin >> x;
            m.erase(x);
            break;

        case 3:

            cin >> x;
            cout << m[x]<<endl;
            break;
        }
    }
}