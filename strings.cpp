//Strings

#include<iostream>
using namespace std;

int main()
{
    char c[8]="SHUBHAM";

    cout<<c;
    cout<<endl<<sizeof(c);

    int t=321;

    cout<<endl<<"t's size"<<sizeof(t);

    string s;

    s="SHUBHAM";

    cout<<endl<<s;
    cout<<endl<<"Length of s= "<<s.length();
    string v=" VERMA";

    s+=v;

    cout<<endl<<"s + v= "<<s;

    cout<<endl<<"Length of renewed s: "<<s.length();

    cout<<endl<<"Size of renewed s in bytes: "<<sizeof(s)<<" bytes";

    string q="bhassd";
    cout<<endl<<q.length();
    cout<<endl<<q.size();

    cout<<endl<<q;
    q[0]='\0';

    cout<<endl<<q;




    return 0;
}
