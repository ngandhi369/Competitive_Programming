#include <iostream>
#include <stack>

using namespace std;

typedef stack<int> s;

int main() {
    int n;
    cin >> n;
    s s;
    int m = 0;
    while (n--) {
        int x;
        cin >> x;
        while (!s.empty()) {
            int y = s.top();
            //cout<<"inner x:"<<x<<endl;
            //cout<<"y:"<<y<<endl;
            m = max(m, ((x & y) ^ (x | y)) & (x ^ y));
            //cout<<"m:"<<m<<endl;
            if (x > y) break;
            //cout<<"pop:"<<s.top()<<endl;
            s.pop();
        }
        //cout<<"push:"<<x<<endl;
        s.push(x);
    }
    cout << m << endl;
}
