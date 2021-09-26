#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for ( int i=0; i<n; i++ )
        cin >> a[i];
    int l=-1, r=-1;
    bool f = false; 
    for ( int i=0; i<n-1; )
    {
        if (a[i]>a[i+1])
        {
                // cout << i << "\n";
            if (f)  
            {
                f = false;
                break;
            }
            f = true;
            l = i+1;
            int j=i+1;
            while(j+1<n && a[j] > a[j+1]) 
            {
                // cout << a[j] << " " << a[j+1] << "\n";
                j++;
            }  
            r = j+1;
            reverse(a+i, a+j+1);
            break;
            i = j;
        }
        else
            i++;
    }
    bool T=true;
    for ( int i=1; T && i<n; i++ )
        if ( a[i] < a[i-1] ) T=false;
    if (l==-1)
        {
            l = 1; r = 1; f = true;
            cout << "yes\n" << l << " " << r;
        }
    else
    {
        if (T) cout << "yes\n" << l << " " << r; 
        else cout << "no";
    } 
    return 0;
}