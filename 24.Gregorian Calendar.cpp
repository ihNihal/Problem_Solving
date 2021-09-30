#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int ref_year = 1900, year, leap = 0, diff, total_days = 0, day = 0;
        cin >> year;

        diff = year - ref_year;

        while (ref_year < year)
        {
            if (ref_year % 100 == 0)
            {
                if (ref_year % 400 == 0)
                {
                    leap++;
                }
            }
            else
            {
                if (ref_year % 4 == 0)
                {
                    leap++;
                }
            }
            ref_year++;
        }

        total_days = (diff - leap) * 365 + leap * 366;
        day = total_days % 7;

        switch (day)
        {
        case 0:
            cout << "monday" << endl;
            break;
        case 1:
            cout << "tuesday" << endl;
            break;
        case 2:
            cout << "wednesday" << endl;
            break;
        case 3:
            cout << "thursday" << endl;
            break;
        case 4:
            cout << "friday" << endl;
            break;
        case 5:
            cout << "saturday" << endl;
            break;
        case 6:
            cout << "sunday" << endl;
            break;
        }
    }
    return 0;
}