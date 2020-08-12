#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1,s2;
        int k=0,j=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)
                s1+=s[i];
            else
                s2+=s[i];
        }
        cout<<s1<<" "<<s2<<endl;
    }
        return 0;
}
