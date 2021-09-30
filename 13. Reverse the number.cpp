#include <iostream>

using namespace std;

int main()
{
    int T,n,i,rem=0,r;
    cin>> T;

    for (i=0;i<T;i++)
    {
        cin>> n;
        while (n!=0){
            r=n%10;
            rem = rem*10 + r;
            n= n/10;
        }
        cout<< rem<<endl;
        rem = 0;
    }
    return 0;
}
