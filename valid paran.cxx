//Valid paranthesis
#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    int n=s.size();
    for(int i=0;i<n;++i)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
            st.push(s[i]);

        else{
            if(s[i]==')')
            {
                if(!st.empty()&&st.top()=='(')
                    st.pop();

                else
                    return false;
            }

             else if(s[i]==']')
            {
                if(!st.empty()&&st.top()=='[')
                    st.pop();

                else
                    return false;
            }

             else
            {
                if(!st.empty()&&st.top()=='{')
                    st.pop();

                else
                    return false;
            }
        }
    }

    return st.empty();
}
int main()
{
    string s;
    cin>>s;
    isValid(s)?cout<<"Yes!":cout<<"NO!";
    return 0;

}
