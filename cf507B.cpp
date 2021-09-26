#include<bits/stdc++.h>
using namespace std;

int main()
{
    float r, x, y, xf, yf;
    cin >> r >> x >> y >> xf >> yf;
    float d = sqrt( pow(x-xf, 2) + pow(y-yf, 2) );
    cout << ceil(d/((float)2*r));
    return 0;
}