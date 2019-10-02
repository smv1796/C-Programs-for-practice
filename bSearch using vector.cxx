#include<iostream>
#include<vector>

using namespace std;

int bSearch(vector<int>& a,int x)
{
    int low=0,high=a.size()-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(a[mid]==x)
            return mid;

        else if(a[mid]>x)
            high--;

        else low++;
    }

    return -1;
}

int main()
{
    vector<int> a;

    unsigned int n;
    cout<<"Enter the no. of elements"<<endl;
    cin>>n;

    cout<<endl<<"Enter the elements"<<endl;

    for(unsigned int i=0;i<n;++i)
    {
        int element=0;
        cin>>element;
        a.push_back(element);
    }

    int x=0;
    cout<<endl<<"Enter the element(in inc. order) to are looking for"<<endl;
    cin>>x;

    int index=bSearch(a,x);

    if (index==-1)
    cout<<"Not found!";

    else cout<<"Found at "<<index<<" index";

}

