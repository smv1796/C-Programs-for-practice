//ATOI

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int atoi(string intnum)
{
    int len=intnum.length();

    int equivint=0;
    for(int i=0;i<len;i++)
    {
        equivint=equivint*10+intnum[i]-'0';
    }

    return equivint;
}
int  main()
{
    string intnum;
    cout<<"Enter the integer";
    cin>>intnum;

    cout<<atoi(intnum);



}
