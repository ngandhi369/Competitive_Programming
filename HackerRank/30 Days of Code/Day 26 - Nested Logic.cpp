#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int D,M,Y,d,m,y;
    cin>>d>>m>>y;
    cin>>D>>M>>Y;
    if(y<Y)
    {
        cout<<0;
        return 0;
    }
    else if(y==Y)
    {
        if(m<M)
        {
            cout<<0;
            return 0;
        }
        else if(m==M)
        {
            if(d<=D)
            {
                cout<<0;
                return 0;
            }
            else//d>D
            {
                cout<<15*(d-D);
                return 0;
            }
        }
        else//m>M
        {
            cout<<500*(m-M);
            return 0;
        }
    }
    else
    {
        cout<<10000;
        return 0;
    }
    return 0;
}

