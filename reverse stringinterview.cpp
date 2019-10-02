//reverse string amazon

#include<iostream>
using namespace std;

void reversestring(string &A)
{
    int s=0;
    int e=A.length()-1;

    while(A[s]==' ')
        s++;

    while(A[e]==' ')
        e--;

        //cout<<endl<<s;
        //cout<<endl<<e;

    string R;
    R.clear();
    string word;

    int i=e;

    while(i>=s)
    {
        int p=i;
        word.clear();
        int wl=0;
        while((i>=s)&&(A[i]!=' '))
        {
            i--;
            wl++;
        }

        int j=i+1;

        word=A.substr(j,wl);

        /*for(int k=0;j<=p;j++)
        {
            word[k]=A[j];
            k++;
        }*/
        cout<<endl<<"w="<<word;

        if(R.length()==0)
            R=word;
        else
        R=R+' '+word;



        while((i>=s)&&(A[i]==' '))
            i--;

    }

    A=R;

     cout<<endl<<"R="<<A;

        }



int main()
{
    string A;
    cout<<"Enter a string"<<endl;
   getline(cin,A);

    reversestring(A);

    return 0;
}
