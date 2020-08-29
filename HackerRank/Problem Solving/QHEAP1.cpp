#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include <set>
using namespace std;


int main() {
    long long int Q,v1,n;
    set<long long int> v;
    cin>>Q;
    while(Q--)
    {
        cin>>v1;
        if(v1==1)
        {
            cin>>n;
            v.insert(n);
        }
        else if(v1==2)
        {
            cin>>n;
            v.erase(v.find(n));
        }
        else if(v1==3)
        {

            cout << *v.begin() << endl;
        }
    }
    return 0;
}
