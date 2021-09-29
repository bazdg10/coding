#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for ( int i=0; i<n; i++ )
        cin >> a[i];
    int j = 1;
    for ( int i=1; i<n; i++ )
    {
        j++;
        if (a[i-1] < a[i])
                j += a[i]-a[i-1];
        else
            j += a[i-1] - a[i];
        j++;
    }
    // j+= a[0]+1);
    j += a[0];
    cout << j;
    return 0;
}