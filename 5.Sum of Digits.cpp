#include <iostream>

using namespace std;

int main()
{
    int T ,n ,sum =0;
    cin>> T;

    for (int i =0; i < T; i++)
    {

        cin>>n;
        while (n != 0)
        {
            sum  = sum + n%10;
            n= n/10;

        }
         cout<<sum<<endl;
         sum =0;

    }

    return 0;
}
