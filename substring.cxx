//Substrings
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string text,subtext;
    getline(cin, text);
    subtext=text.substr(1,2);
    cout<<endl<<subtext;

}
