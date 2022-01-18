#include<bits/stdc++.h>
using namespace std;

int maxSumAferOneOp(vector<int>& arr) {

    int n = arr.size();
    vector<vector<int>> dp(2, vector<int>(n, -1));

    

} 

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for ( int i=0; i<n; i++ ) 
        cin >> arr[i];

    cout << maxSumAferOneOp(arr);


    return 0;
}