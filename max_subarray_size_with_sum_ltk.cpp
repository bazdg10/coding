#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    bool f = true;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        f &= (arr[i]>k); 
    }

    // Binary search and prefix sum

    // if (f) {
    //     vector<int> pref(n+1, 0);
    //     pref[1] = arr[0];
    //     for ( int i=1; i<n; i++ ) 
    //         pref[i+1] = pref[i] + arr[i];
    //     int l = 1;
    //     int r = n;
    //     int len = -1;
    //     while(l<=r) {
    //         int m = l + (r-l)/2;
    //         bool flag = true;
    //         for ( int i=m; flag && i<n; i++ ) 
    //             flag = (pref[i] - pref[i-m] > k);
    //         if (flag) {
    //             len = m;
    //             l = m+1;
    //         } else r = m-1;           
    //     }
    // cout << len;
    // }

    // Sliding Window
    // int start = 0;
    // int end = 0;
    // int res = n;
    // int sum = 0;
    // for ( ; end<n; end++ ) {
    //     sum += arr[end];
    //     while(sum > k) {
    //         sum -= arr[start++];
    //         if (sum==0) break;
    //         res = min ( res, end-start+1 );
    //     }
    //     if (sum==0) {
    //         res = -1;
    //         break;
    //     }
    // }

    // cout << res;

    return 0;
}