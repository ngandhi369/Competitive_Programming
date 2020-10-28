// Codeforces Round #676 (Div. 2), problem: (A) XORwice

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long int a,b,c;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        c = a&b;

        cout<<(a^c)+(b^c)<<endl;
    }
return 0;
}
