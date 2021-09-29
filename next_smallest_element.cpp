#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for ( int i=0; i<n; i++ )
        cin >> a[i];
    stack<int> stk;
    vector<int> nsr(n);
    for ( int i=0; i<n; i++ )
    {
        while(!stk.empty() && a[stk.top()] >= a[i])
            stk.pop();
        nsr[i] = stk.empty() ? n : stk.top();
    }
    for ( int i=0; i<n; i++ )
        cout << nsr[i] << " ";
    return 0;
}