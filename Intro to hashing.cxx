//Find the occurrence of each element in a string.

#include<iostream>
#include<string>

using namespace std;

  int  hash_fn(char c)
    {
        return (c-'a');//Hash Function

    }

int main()
{
    int Frequency[26];//Hash Table

    for(unsigned int i=0;i<26;i++)
        Frequency[i]=0;           //Initialising all the values to '0';

    string s;
    cout<<"Enter string"<<endl;
    cin>>s;



    for(unsigned int i=0;i<s.size();++i)
    {
        Frequency[hash_fn(s[i])]++;
    }

    for(char c='a';c<='z';c++)
    {
        cout<<c<<" occurs "<<Frequency[c-'a']<<" times"<<endl;
    }

}
