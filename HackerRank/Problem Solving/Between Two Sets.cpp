#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    int flag=0,count=0;
    for(int i=a[n-1];i<=b[0];i++)
    {
        flag=0;
        for(int j=0;j<n;j++)
        {
            if(i%a[j]!=0)
            {
                flag=-1;
                break;
            }
        }
        for(int j=0;j<m;j++)
        {
            if(b[j]%i!=0)
            {
                flag=-1;
                break;
            }
        }
        if(flag==0)
            ++count;
    }
    cout<<count;
    return 0;
}




//TIME LIMIT EXCEEDS:

//#include<bits/stdc++.h>
//using namespace std;
//int real_GCD(int a,int b)
//{
//    if(a==0 || a==b)
//        return b;
//    else if(b==0)
//        return a;
//    if(a>b)
//        return real_GCD(a%b,b);
//    else if(b>a)
//        return real_GCD(a,b%a);
//}
//int gcd(int* a,int n)
//{
//    int result=a[0];
//    for(int i=1;i<n;i++)
//    {
//        result=real_GCD(result,a[i]);
//        //cout<<"inner GCD:"<<result<<endl;
//        if(result==1)
//            return 1;
//    }
//    return result;
//}
//int main()
//{
//    int n,m,g1,g2;
//    cin>>n>>m;
//    int a[n],b[m],count=0;
//    for(int i=0;i<n;i++)
//        cin>>a[i];
//    for(int i=0;i<m;i++)
//        cin>>b[i];
//    g1=gcd(a,n);
//    //cout<<g1<<endl;
//    g2=gcd(b,m);
//    //cout<<g2<<endl;
//    while(g2>=a[n-1])
//    {
//        //cout<<g2/g1<<endl;
//        g2=g2/g1;
//        ++count;
//    }
//    cout<<count;
//return 0;
//}
