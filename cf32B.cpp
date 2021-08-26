#include<bits/stdc++.h>
using namespace std;

int digs(int a)
{
    int f[10] = {0};
    while(a)
    {
        if (f[a%10])    return true;
        f[a%10]++;
        a/=10;
    }
return false;
}
int main()
{
    int c;
    cin >> c;  
    c++;
    while(digs(c))
        c++;
    cout << c;  
    return 0;
}