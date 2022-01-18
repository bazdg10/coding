#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> sum(n+1, 0);
    for ( int i=0; i<n; i++ )
        {
            cin >> arr[i];
            sum[i+1] = arr[i] + sum[i];
        }
    int q;
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;
        cout << sum[r+1] - sum[l] << "\n";
    }
    return 0;
}