#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        set <int> s;

        for(long int i=0;i<n;++i)
        {
            cin>>a;
            s.insert(a);
        }

        set <int> :: iterator i;
        i = s.begin();
        if(*i==0)
            s.erase(i);

//        for(i=s.begin();i!=s.end();i++)
//            cout<<*i<<" ";
//        cout<<endl;

        cout<<s.size()<<"\n";
    }

return 0;
}
