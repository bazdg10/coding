#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> timings(n);
        for ( int i=0; i<n; i++ )
            cin >> timings[i];
        vector<long long> healths(n);
        for ( int i=0; i<n; i++ )
            cin >> healths[i];
        
        long long pow = healths[n-1];
        long long next = timings[n-1];

        long long res = 0;

        for ( int i=n-2; i>=0; i-- ) {
            long long gap = next-timings[i];
            if ( gap >= pow-healths[i] ) 


        }

    }
    return 0;
}