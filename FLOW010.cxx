//FLOW010
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        char ch;
        cin>>ch;

        if(ch=='c'||ch=='C')
            cout<<"Cruiser"<<endl;

        else if(ch=='b'||ch=='B')
            cout<<"BattleShip"<<endl;
        else if(ch=='d'||ch=='D')
            cout<<"Destroyer"<<endl;
         else if(ch=='f'||ch=='F')
            cout<<"Frigate"<<endl;
            t--;
    }
}
