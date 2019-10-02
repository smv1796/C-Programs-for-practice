//Excel sheet number
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int excel(string);
int main()
{
    string s;
    cout<<"Enter string"<<endl;
    getline(cin,s);
    cout<<"Ans. "<<excel(s);

}
int excel(string s)
{
    int sum=0,k=s.size();
    cout<<endl<<"Size: "<<k<<endl;
    for(int i=0;i<s.size();i++)
    {
        int alph=1;
         char c='A';
        while(c<s[i])
        {
            alph++;
            c++;
        }
        sum=sum+(pow(26,(s.size()-(i+1)))*alph);
    }
    return sum;
}

