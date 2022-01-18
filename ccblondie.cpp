#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        long sum = 0;
        for ( int i=0; i<n; i++ )
        {
            cin >> a[i];
            if (a[i]==-1)
                a[i] = sum/(i);
            sum += a[i];
        }
        for ( int i=0; i<n; i++ )
            cout << a[i] << " ";
    cout << "\n";
    }


    return 0;
}