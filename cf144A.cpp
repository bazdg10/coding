#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for ( int i=0; i<n; i++ )   
        cin >> a[i];
    int max_el = a[0]; int max_i = 0;
    int min_el = a[0]; int min_i = 0;
    for ( int i=0; i<n; i++ )
    {
        if (a[i] > a[max_i])
            max_i = i;
        if (a[i] <= a[min_i])
            min_i = i;        
    }
    int c = n-1 - min_i + max_i; 
    if (max_i > min_i)
            c--;
    cout << c;
    return 0;
}