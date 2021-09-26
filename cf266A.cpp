#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a)
{
    for ( int i=2; i*i<=a; i++ ) {
        if (a%i==0) return false;
    }
return true;
} 
int main()
{
    int n, m;
    cin >> n >> m;
    int x = -1;
    for ( int i=n+1; x==-1 && i<=m; i++ )
        if (isPrime(i))
            x = i;
    // cout << x;
    if (x==m)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}