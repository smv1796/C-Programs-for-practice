#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;

class LRU
{
    int N;
    unordered_map<int,int> M;//stores (key,value) pair
    vector<int> Q;//stores the key, most recently used key is at the front and least recently used key is at the back.
   int ent;
    //dequeue<int> dq;
     LRU(int x)
    {
        N=x;
        ent=0;
    }
public:

   void printVec()
   {
       int n=Q.size();
       for(int i=0;i<n;++i)
        cout<<Q[i]<<" ";
       cout<<endl;
   }
   static int count;

    static LRU* func(int x)
    {

        if(count!=0)
            return NULL;
//cout<<"size lru"<<x;
        LRU* lp=new LRU(x);
  //      cout<<"lpsize"<<lp->N;
        count++;
        return lp;
    }
    void push(int key)
    {
        Q.push_back(0);
        int n=Q.size();
        for(int i=n-1;i>0;--i)
            Q[i]=Q[i-1];

        Q[0]=key;
    }
    int lowerbound(int key)
    {
        int i=0,n=Q.size();
        for(;i<n;++i)
            if(Q[i]==key)
            return i;
    }
    void push2(int key)
    {
        int i=lowerbound(key);
        for(int j=i;i>0;--i)
            Q[i]=Q[i-1];

        Q[0]=key;

    }
    void putthisEntry(int key,int value)
    {
        if(M.find(key)!=M.end()) return;
       // cout<<"Size"<<ent<<"-"<<N;
        if(ent==N)
        {
            //cout<<"Done";
            M.erase(Q[Q.size()-1]);
            ent--;
            Q.pop_back();
            //cout<<"done";
        }
        ent++;
        M[key]=value;
        push(key);


    }
    void get(int key)
    {
        if(M.find(key)!=M.end())
        {
            cout<<M[key]<<endl;
            push2(key);
        }

        else cout<<"Key is not present";

    }


};

int LRU::count=0;
int main()
{
    int N=0;
    cin>>N;
    cout<<N;
    LRU* lp=LRU::func(N);
    if(!lp) cout<<"Locked"<<endl;
   // else cout<<"Unlocked, you can use cache"<<endl;
    lp->putthisEntry(0,1);
    lp->printVec();
    lp->putthisEntry(0,1);
    lp->printVec();
    lp->putthisEntry(1,3);
    lp->printVec();
    lp->putthisEntry(2,7);
    lp->printVec();
    lp->putthisEntry(3,9);
    lp->printVec();
    lp->get(2);    lp->putthisEntry(4,1);
    lp->printVec();
    lp->putthisEntry(5,6);
    lp->printVec();
    lp->get(2);
    lp->printVec();

    LRU* lp2=LRU::func(5);
    if(!lp2) cout<<"Locked"<<endl;
    else cout<<"Unlocked, you can use cache"<<endl;

    return 0;
}
