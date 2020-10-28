//Codeforces Raif Round 1 (Div. 1 + Div. 2), problem: (A) Box is Pull

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long int x1,y1,x2,y2;

    cin>>t;

    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2)
        {
            cout<<abs(y2-y1)<<endl;
            continue;
        }

        if(y1 == y2)
        {
            cout<<abs(x2-x1)<<endl;
            continue;
        }

        cout<<abs(y2-y1) + abs(x2-x1) + 2<<endl;

    }

return 0;
}
