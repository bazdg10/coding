#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll x, y;
    cin >> x >> y;
    int n;
    cin >> n;
    ll p = 1e9+7;
    ll a[6];
    a[0] = ((x+p)%p+p)%p;
    a[1] = ((y+p)%p+p)%p;
    a[2] = ((y-x+p)%p+p)%p;
    a[3] = ((-x+p)%p+p)%p;
    a[4] = ((-y+p)%p+p)%p;
    a[5] = ((x-y+p)%p+p)%p;
    cout << a[(n-1)%6];
    return 0;
}