#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int length(string);
int main()
{
    char s[80];
    cin.getline(s,80);
    cout<<s<<endl;

    string s2;
    getline(cin,s2);
    cout<<endl<<s2;
    cout<<endl<<"Length"<<setw(3)<<s2.size();


}
int length(string s)
{
    int len=0,i=0;
    while(s[i]!=NULL)
    {
        len++;
        i++;
    }
        return len;
}
