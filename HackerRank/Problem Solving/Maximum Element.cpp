#include <cmath>
#include <cstdio>
#include <ctime>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class stack
{
    long int top=-1,a[100000],max=0;
public:
    void push(long int x)
    {
        if(max<x)
            max=x;
        a[++top]=x;
    }
    void pop(void)
    {
        long int index;
        if(a[top]==max)
        {
            top--;
            max=0;
            index=top;
            while(index>=0)
            {
                max = a[index] > max ? a[index] : max;
                index--;
            }
        }
        else
            top--;
    }
    long int print(void)
    {
        return max;
    }
};

int main() {
    stack s;
    long int n,x,t;
    cin>>n;
    while(n--)
    {
        cin>>t;
        if(t==1)
        {
            cin>>x;
            s.push(x);
        }
        else if(t==2)
        {
            s.pop();
        }
        else if(t==3)
        {
            cout<<s.print()<<endl;
        }
    }
    return 0;
}
