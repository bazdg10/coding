#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int> one; 
    int a;
    for ( int i=1; i<6; i++ )
    {
        for ( int j=1; j<6; j++ )
        {
            cin >> a;
            if (a==1)
                one = {i, j};
        }
    }
    cout << abs(3-one.first) + abs(3-one.second);
    return 0;
}