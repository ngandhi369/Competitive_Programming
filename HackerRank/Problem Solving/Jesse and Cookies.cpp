#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,k;
    cin>>n>>k;

    priority_queue<int, vector<int>, greater<int>> A;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        A.push(a);
    } 
    int count = 0;
    while (A.top() < k && A.size() >= 2)
    {
        int least = A.top();
        A.pop();
        int second = A.top();
        A.pop();
        A.push(least + 2 * second);
        count++;
    }
    cout << (A.top() >= k ? count : -1);
    return 0;
}
