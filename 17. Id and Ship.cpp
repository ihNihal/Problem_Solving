#include <iostream>

using namespace std;

int main()
{
    char letter;
    int T,i;
    cin>>T;
    for (i=0; i<T;i++)
    {
        cin>>letter;
        if ((letter=='B') || (letter=='b'))
        {
            cout<< "BattleShip"<<endl;
        }
        else if ((letter == 'c') || (letter == 'C'))
        {
            cout << "Cruiser"<<endl;
        }
        else if ((letter == 'd') || (letter == 'D'))
        {
            cout<< "Destroyer"<<endl;
        }
        else if ((letter == 'f') || (letter == 'F'))
        {
            cout << "Frigate" <<endl;
        }
    }
    return 0;
}
