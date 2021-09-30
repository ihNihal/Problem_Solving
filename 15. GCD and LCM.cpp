#include <iostream>

using namespace std;
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}


long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int T, a, b, i,g=1,l=1;
    cin>>T;

    for (i=0;i<T;i++)
    {
        cin>>a;
        cin>>b;

        cout<<gcd(a,b) <<" "<<lcm(a,b)<<endl;
         }
    return 0;
}