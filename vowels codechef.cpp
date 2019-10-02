#include<iostream>
#include<unordered_set>
using namespace std;

bool isVowel(char& c)
{
    return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');

}
bool isLiked(string& s)
{
    unordered_set<char> table;

    for(int i=0;i<s.size();++i)
    {
        if(isVowel(s[i]))
           table.insert(s[i]);
    }

    if(table.size()>=4) return true;
    else return false;
}
int main()
{
    int N=0;
    cin>>N;

    string s;

    for(int i=0;i<N;++i)
    {
        char c;
        cin>>c;
        s.push_back(c);
    }

    if(isLiked(s))
        cout<<"Yes";
    else cout<<"No";

    return 0;
}
