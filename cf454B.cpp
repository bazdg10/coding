#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for ( int i=0; i<n; i++ )
        cin >> a[i];

    bool f = true;
    int i = 0;
    int fl = -1;
    for (; fl==-1 && i<n-1; i++)
        if (a[i]>a[i+1])
            fl = i+1;
    if (fl==-1)
        cout << "0";
    else
    {
    i = fl;
    int j=0;
    while(j<n-1 && f)
        {
            // cout << i <<" " ;
            if (a[i] > a[(i+1)%n])
                f = false;
            i = (i+1)%n;
            j++;
        }
    if (f)
        cout << n-fl;
    else
        cout << "-1";
    }
    
    return 0;
}