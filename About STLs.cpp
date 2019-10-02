#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a ,int b)
{
    return a<b;//For ascending arrangement.
}

void display(vector<int>& A)
{
    int n=A.size();
    int i=0;
    while(i<n)
    {
        cout<<A[i];
        i++;
    }
}

int main()
{
  vector<int> A;
  int n=0;
  cout<<"Enter size";
  cin>>n;

  cout<<"\n Enter elements";

  for(int i=0;i<n;++i)
  {
      int ele=0;
      cin>>ele;
      A.push_back(ele);
  }


  sort(A.begin(),A.end(),compare);

  display(A);
}
