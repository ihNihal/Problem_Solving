#include <iostream>

using namespace std;



int main()
{   int T,i;
    cin>>T;

    for (i =0;i<T; i++)
    {
        int n,ans=1;
        cin>>n;
        while (n>0)
        {
            ans*=n;
            n--;
        }
        cout<< ans<<endl;
    }

    return 0;
}
