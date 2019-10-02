//Bit manipulation
#include<iostream>
using namespace std;
int main()
{while(1){
 int x,y;
 cout<<"Enter x and y"<<endl;
 cin>>x;
 if(x==0||x&(x-1))
    cout<<"Not 2's power"<<endl;
    else cout<<"2's power"<<endl;
}
}
