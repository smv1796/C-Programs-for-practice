#include<iostream>
#include<vector>
using namespace std;

unsigned int numWays(unsigned int& N, unsigned int& k)
{
    unsigned int ways=0;
    vector<unsigned int> dp(N+1,0);
    dp[0]=1;
    unsigned int sumOfWindow=1;
    int front=0, rear=k-1;
    for(int i=1;i<=N;++i)
    {

        dp[i]=sumOfWindow;
        if(i==N) return dp[N];
         if(i>=k)
        {
            sumOfWindow-=dp[front];

            front++;
            rear++;
            sumOfWindow+=dp[rear];
        }

        else
            sumOfWindow+=dp[i];
    }
}

int main()
{
    unsigned int N=0;
    cout<<"Enter the step you wanna reach"<<endl;
    cin>>N;

    unsigned int k=0;
    cout<<"Number of steps you can take at a time"<<endl;
    cin>>k;

    cout<<endl<<numWays(N,k);
}
