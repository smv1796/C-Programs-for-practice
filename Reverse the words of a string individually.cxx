//Reverse the words of a string individually
#include<iostream>
#include<string>
using namespace std;
int main()
{
    char a[80];
    cout<<"Enter string" ;
    cin.getline(a,80);
    int i=0;
    int len=0;
    while(a[i]!=NULL)
        len++;
    for(i=0;i<len;++i)
    {
        if(a[i]==" "||a[i]==NULL)
        {
            int j=i--;
            cout<<" ";
            while(a[j]!=" ")
            {
                cout<<a[j];
                j--;
            }


        }
    }

}
