//matched brackets
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void solution(vector<int>& B)
{
    int Ssize=0;
int pos=0;
int maxSeq=0;
int posSeq=0;

    int n=B.size();
    //typedef pair<int,int> P;
    //stack<P> S;
    stack<int> S;//stores the position of opening brackets


    for(int i=0;i<n;++i)
    {
        if(B[i]==1)//Opening bracket
        {
            S.push(i);
            if(S.size()>Ssize)
            {
                Ssize=S.size();
                pos=i+1;

            }
        }


        else
        {
            int j=S.top();
            S.pop();

            if(maxSeq<(i-j+1))
            {
                maxSeq=i-j+1;
                posSeq=j+1;
            }
        }
    }

    cout<<Ssize<<' '<<pos<<' '<<maxSeq<<' '<<posSeq;
}
int main()
{
    int N=0;
    cin>>N;
    vector<int> B(N);

    for(int i=0;i<N;++i)
    {
        int ele;
        cin>>ele;
        B[i]=ele;
    }

    solution(B);

}
