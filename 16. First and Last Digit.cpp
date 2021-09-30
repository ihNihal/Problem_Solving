#include <iostream>

using namespace std;

int main()
{
   int T, a,i,sum = 0,fr ,re,r,rev=0;
   cin>> T;
   for (i=0;i<T;i++)
   {

       cin >> a;
       re = a%10;
       while ( a > 0)
       {
           r = a%10;
           rev = rev*10 + r;
           a =a/10;
       }
       fr = rev %10;
       sum = fr + re;
       rev = 0;
       cout << sum << endl;

   }
    return 0;
}
