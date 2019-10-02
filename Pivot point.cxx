//Pivot point-Binary search
#include<bits/stdc++.h>

using namespace std;

/*void ans(&A)
{

}
*/
int main()
{
    int A[]={4,5,6,7,0,1,2};

     int start=0,end=6,pivot=0;

    if(A[start]>A[end])
    {
      while(1)
      {
          int mid=start+(end-start)/2;
          if((A[mid])>(A[start]))
          {
              if((A[mid+1])<(A[mid]))
              {
              pivot=mid;
              break;
              }
               else
                    start=mid+1;
          }

          else
          {
              if(A[mid-1]>A[mid])
              {
                  pivot=mid-1;
                  break;
              }

              else
                end=mid-1;
          }
      }
    }
    cout<<pivot;
}


