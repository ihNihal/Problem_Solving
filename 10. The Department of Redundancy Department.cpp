#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int num;
    map<int, int> red;
    vector<int> item;

    while (cin >> num)
    {
        if (red.find(num) != red.end())
            red[num]++;
        else
        {
            red[num] = 1;
            item.push_back(num);
        }
    }
    for (int i = 0; i < item.size(); i++)
    {
        cout << item[i] << " " << red[item[i]] << endl;
    }
}