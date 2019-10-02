#include<iostream>
#include<string>
using namespace std;


bool isMUJpresent(string& m)
{
    int n=m.size();
    if(n<3) return false;
    string s;
    s.push_back(m[0]);
    s.push_back(m[1]);
    s.push_back(m[2]);

    if(s=="MUJ") return true;

    int r=3;

    while(r<m.size())
    {
        char temp=s[1];
        s[0]=s[1];
        s[1]=s[2];
        s[2]=m[r];

        if(s=="MUJ") return true;
        r++;
    }
      return false;
}
int main()
{
    int T=0;
     cin>>T;
    while(T)
    {
        string msg;
        cin>>msg;

        if(isMUJpresent(msg))
            cout<<"YES"<<endl;

        else cout<<"NO"<<endl;

        T--;
    }
    return 0;
}
