#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    long int n;
    cin>>t;
    while(t--)
    {
        int flag=0;
        cin>>n;
        if(n==1)
        {
            cout<<"Not prime"<<endl;
            continue;
        }
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                flag=1;
                cout<<"Not prime"<<endl;
                break;
            }
        }
        if(flag==0)
            cout<<"Prime"<<endl;
    }

    return 0;
}
