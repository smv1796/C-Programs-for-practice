#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

bool isitliked(string& s1, string& s2)
{
    unordered_set<char> table;
    string res=s1+s2;

    for(int i=0;i<res.size();++i)
    {
        if(res[i]=='a' && table.find('a')==table.end())
            table.insert('a');

        else if(res[i]=='e' && table.find('e')==table.end())
            table.insert('e');

        else if(res[i]=='i' && table.find('i')==table.end())
            table.insert('i');

        else if(res[i]=='o' && table.find('o')==table.end())
            table.insert('o');

         else if(res[i]=='u' && table.find('u')==table.end())
            table.insert('u');

       if(table.size()==5) return true;
    }

    return false;
}

int likedMeals(vector<string>& S)
{
    int n=S.size();
    int count=0;
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(isitliked(S[i],S[j]))
                count++;
        }
    }

    return count;
}
int main()
{
    int T=0;
    cin>>T;

    while(T)
    {
        int N=0;
        cin>>N;

        vector<string> S(N);

        for(int i=0;i<N;++i)
        {
            string sEle;
            cin>>sEle;
            S[i]=sEle;

        }

        cout<<likedMeals(S);

        T--;
    }

}
