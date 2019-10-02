//Palindrome check
#include<iostream>
#include<string>
using namespace std;
bool palCheck(string);
int main()
{
    string str;
    cout<<"Enter"<<endl;
    getline(cin,str);

    if( palCheck(str))
        cout<<"It's a palindrome";
    else cout<<"It's not a palindrome";

}
bool palCheck(string s)
{
    int i=0,j=s.size()-1,flag=1;
    for(i,j;i<s.size()/2;i++,j--)
    {
        if(s[i]!=s[j])
            flag=0;
    }
        return flag;
}
