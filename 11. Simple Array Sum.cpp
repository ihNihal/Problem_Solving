#include <iostream>

using namespace std;

int main()
{
    int s;
    cin>> s;
    int a[s], sum=0;
    for (int i =0; i<s;i++)
    {
        cin>>a[i];
    }

    for (int i =0; i<s;i++)
    {
        sum+= a[i];
    }

    cout<<sum<<endl;
    return 0;
}
