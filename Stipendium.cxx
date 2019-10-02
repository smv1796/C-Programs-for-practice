//Stipendium
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
          {
                int n,flag=0,sum=0;
                cin>>n;
                int arr[n];
                for(int i=0;i<n;++i)
                {
                    cin>>arr[i];
                    cout<<" ";
                    if(arr[i]==5)
                        flag=1;

                    sum=sum+arr[i];
          }

          if(flag==1&&(sum/n)>=4)
            cout<<"Yes"<<endl;
          else cout<<"No"<<endl;

          t--;
}
}

