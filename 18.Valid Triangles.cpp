#include <iostream>

using namespace std;

int main()
{
    int T, A, B, C,i;
    cin>>T;
    for (i=0;i<T;i++)
    {
        cin>>A;
        cin>>B;
        cin>>C;

        int sum =0;
        sum = A+B+C;
        if (sum == 180)
        {
            cout << "YES"<<endl;

        }
        else {
            cout <<"NO"<<endl;
        }
    }

    return 0;
}
