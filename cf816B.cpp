#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    // vector<pair<int,int>> temps(n);
    int l, r;
    vector<int> temps(200002, 0);
    for ( int i=0; i<n; i++ ) {
        cin >> l >> r;
        // temps[i] = {l, r};
        temps[max(l, 1)]++;
        temps[min(200001, r+1)]--;
    }
    for ( int i=1; i<200002; i++ )  temps[i] += temps[i-1];
    // for ( int i=0; i<200002; i++ ) temps[i] -= (k-1);

   
    int a, b;
    vector<int> pref(200002, 0);
    for ( int i=1; i<200002; i++ )
        pref[i] = pref[i-1] + (temps[i]>=k);
    // for ( int i=90; i<101; i++ )
    //     cout << i << " : " << temps[i] << ", " << pref[i] << "\n";
    // cout << "\n";

    while(q--) {
        cin >> a >> b;
        cout << pref[b] - pref[a-1] << "\n";
    }

    return 0;
}