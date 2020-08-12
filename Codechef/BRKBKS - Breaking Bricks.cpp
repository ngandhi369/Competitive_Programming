#include<iostream>
using namespace std;
int main()
{
    int t,s,w1,w2,w3,sum,count;
    cin>>t;
    while(t--)
    {
        sum=0;count=1;
        cin>>s>>w1>>w2>>w3;
        sum=w1+w2+w3;
        if(s>=sum)
        {
            count=1;
        }
        else
        {
            if((w1==1) && (w2==1) && (w3==1))
            {
                if(s==1)
                count=3;
                else if(s==2)
                count=2;
            }
            else if((w1==1) && (w2==1) && (w3==2))
            {
                if(s==2 ||s==3)
                count=2;
            }
            else if((w1==1) && (w2==2) && (w3==2))
            {
                if(s==2)
                count=3;
                else if(s==3)
                count=2;
                else if(s==4)
                count=2;
            }
            else if((w1==1) && (w2==2) && (w3==1))
            {
                if(s==2)
                count=3;
                else if(s==3)
                count=2;
            }
            else if((w1==2) && (w2==1) && (w3==1))
            {
                if(s==2 || s==3)
                count=2;
            }
            else if((w1==2) && (w2==1) && (w3==2))
            {
                if(s==2)
                count=3;
                else if(s==3 || s==4)
                count=2;
            }
            else if((w1==2) && (w2==2) && (w3==1))
            {
                if(s==2)
                count=3;
                else if(s==3 || s==4)
                count=2;
            }
            else if((w1==2) && (w2==2) && (w3==2))
            {
                if(s==5 ||s==4)
                count=2;
                else if(s==3 || s==2)
                count=3;

            }
        }
        cout<<count<<endl;
    }
return 0;
}
