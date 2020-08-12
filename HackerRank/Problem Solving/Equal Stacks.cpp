#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    int h1=0,h2=0,h3=0;
    int a1[100000],a2[100000],a3[100000];

    cin>>n1>>n2>>n3;

    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
        h1+=a1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>a2[i];
        h2+=a2[i];
    }
    for(int i=0;i<n3;i++)
    {
        cin>>a3[i];
        h3+=a3[i];
    }
    
    bool equal=false;
    int i1=0,i2=0,i3=0;

    if(h1==h2 && h2==h3)
    {
        cout<<h1<<endl;
        return 0;
    }

    while(!equal)
    {
        if(h1>=h2 && h1>=h3)
        {
            h1-=a1[i1];
            i1++;
        }
        else if(h2>=h1 && h2>=h3)
        {
            h2-=a2[i2];
            i2++;
        }
        else if(h3>=h1 && h3>=h2)
        {
            h3-=a3[i3];
            i3++;
        }
        if(h1==h2 && h2==h3)
        {
            equal=true;
        }
    }
    cout<<h1<<endl;
    return 0;
}
