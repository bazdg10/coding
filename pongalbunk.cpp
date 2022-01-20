#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int q;
    cin >> q;
    vector<int> arr(n+2, 0);
    vector<int> arr1(n+2, 0);
    int l, r;
    while(q--) {
        cin >> l >> r;
        arr[l] ++; 
        arr[r+1] --;
        arr1[r+1] -= (r-l+1);
    }
    for (int i=1; i<=n; i++)
        arr[i] += arr[i-1];
    for (int i=1; i<=n; i++)
        arr1[i] += arr1[i-1] + arr[i];
    int m;
    cin >> m;
    int idx;
    while(m--) {
        cin >> idx;
        cout << arr1[idx] << "\n";
    }
    // for ( int k : arr1 )
        // cout << k << " ";
    return 0;
}