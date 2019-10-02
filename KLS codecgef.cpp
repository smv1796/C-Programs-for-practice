//Kira loves palindrome
#include<iostream>
#include<vector>
#include<string>
typedef long long ll;
using namespace std;

struct P
{
    //public:What are the member of struct by default
    string s;
    int st;
    int e;
};

void make_pairs(string& S,vector<P>& A)
{
    int n=S.size();
    for(int i=0;i<n;++i)
    {
        string str;
        for(int j=i;j<n;++j)
        {
            str.push_back(S[j]);
            P p;
            p.s=str;
            p.st=i;
            p.e=j;

            A.push_back(p);

        }
    }
}

bool isPalin(string K)
{
    int l=0,r=K.size()-1;

    while(l<r)
    {
        if(K[l]!=K[r])
            return false;

        l++;
        r--;
    }

    return true;
}

bool isOlp(P& I, P& J)
{
    int x=I.st, y=I.e, a=J.st, b=J.e;

    if(x==a) return true;

    else if(x<a)
    {
        if(a>y) return false;
        return true;
    }

    else if(x>a)
    {
        if(x>b) return false;
        else return true;

    }
}
ll countPalin(vector<P>& A)
{
    ll n=A.size();
    ll ans=0;
    for(ll i=0;i<n-1;++i)
    {
        string s1=A[i].s;
        for(ll j=i+1;j<n;++j)
        {
            string s2=A[j].s;
            if(isOlp(A[i],A[j])) continue;

            else
            {
                if(isPalin(s1+s2))
                    ans++;
            }
        }

    }

    return ans;
}


int main()
{
    string S;
    cin>>S;

    vector<P> A;
    make_pairs(S,A);
    cout<<countPalin(A);

}
