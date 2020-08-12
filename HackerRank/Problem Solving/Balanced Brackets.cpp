#include<bits/stdc++.h>
#include <ostream>
using namespace std;

void fun(string s);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        fun(s);
    }
    return 0;
}

void fun(string s)
{
    int flag=1;
    char c;
    stack<char>a;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            a.push(s[i]);
        }
        if(i==s.length()-1)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            {   
                cout<<"NO"<<endl;
                return;
            }
        }
        if(s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if(a.empty())
            {
                cout<<"NO"<<endl;
                return;
            }
            else
            {
                c=a.top();
                a.pop();
                if( s[i]==')' && c!='(' )
                {  
                    cout<<"NO"<<endl;
                    return;
                }
                else if( s[i]=='}' && c!='{')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else if( s[i]==']' && c!='[')
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"YES"<<endl;
}

