//guess number
#include<iostream>
using namespace std;
int rnum;
int guess(int gnum)
{
    if(rnum==gnum)
        return 0;
    else if(gnum>rnum)
    return 1;
    else return -1;

}
int main()
{
    int n;
    cout<<"Enter the number to be guessed ";
    cin>>rnum;
    cout<<endl<<"Enter the upper limit of range ";
   cin>>n;
   int i=1,f=n;
   while(i<=f)
   {
       int mid=(i+f)/2;
       if(guess(mid)==0){
        cout<<"Ans.: "<< mid; return 0;}
       else if(guess(mid)==1)
        f=mid--;
       else i=mid++;
   }
}
