#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s1,j1,s2,j2;
    cin>>s1>>j1>>s2>>j2;
    while(s1<4294967295 && s2<4294967295)
    {
        if(s1==s2)
        {
            cout<<"YES";
            return 0;
        }
        s1=s1+j1;
        s2=s2+j2;
    }
    cout<<"NO";
return 0;
}


//or

int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    // Corner case: Second kangaroo is at least as fast as first kangaroo
    if(v2 >= v1) {
        cout<<"NO";
    } else if((x2-x1)%(v1-v2) == 0) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}

//or

int main() {

    int x1,x2,v1,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    while(true){
        if(x2 > x1 && v2 > v1 || x1 > x2 && v1 > v2 || v1 == v2){
            cout << "NO" << endl;
            break;
        }
        if((x1 += v1) == (x2 +=v2)){
            cout << "YES" << endl;
            break;
        }
    }
    return 0;
}
