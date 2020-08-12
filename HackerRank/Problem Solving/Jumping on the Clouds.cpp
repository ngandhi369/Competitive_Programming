#include <bits/stdc++.h>
using namespace std;

const int inf = 555;
int A[111], dp[111];

int main() {
    int n; cin >> n;

    for(int i=0; i<n; i++) {
        cin >> A[i];
    }
    for(int i=1; i<n; i++) {
        if(A[i] == 0)
        {
             dp[i] = min(dp[i-1], dp[i-2]) + 1;
             cout<<"here:"<<dp[i]<<endl;
        }
        else
        {
            dp[i] = inf;
            cout<<"at:"<<dp[i]<<endl;
        }
    }
    for(int i=0;i<=n;i++)
        cout<<"dp["<<i<<"]:"<<dp[i]<<endl;
    cout<<endl;
    cout << dp[n-1] << "\n";
    return 0;
}
