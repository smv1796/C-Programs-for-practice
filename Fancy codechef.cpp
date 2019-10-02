#include <iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void quote(string& s)
{
   cout<<s<<endl;
    int r=0;
    string str;
    for(r=0;r<s.size();++r)
    {
        if(s[r]==' ')
        {
            if(str=="not")
            {
                cout<<"Real Fancy"<<endl;
                return;
            }

            str.clear();
        }

        else
         str.push_back(s[r]);
        //cout<<"loop no"<<r<<endl;

    }
   cout<<r<<endl;
    cout<<str<<endl;
    if(str=="not")
    {
        cout<<"Real Fancy"<<endl;
        return;
    }

    else
    {
        cout<<"regular fancy"<<endl;
        return;
    }

}
int main() {
	// your code goes here
	int T=0;
	cin>>T;
//cin.ignore(INT_MAX);
	while(T)
{

cin.ignore();
    string s;

	    s.clear();
	    getline(cin,s);

	    cout<<s<<endl;
	    quote(s);
	    cin.ignore();

        T--;
    }
	return 0;
}
