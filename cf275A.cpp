#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3];
    for ( int i=0; i<3; i++ )
        for ( int j=0; j<3; j++ )
            a[i][j] = 1;
    int c = 0;
    for ( int i=0; i<3; i++ )
    {
        for ( int j=0; j<3; j++ )
        {
            cin >> c;
            if (c%2)
            {
                a[i][j] = 1 - a[i][j];
                if (j+1<3)
                    a[i][j+1] = 1 - a[i][j+1];
                if (j-1>=0)
                    a[i][j-1] = 1 - a[i][j-1];
                if (i+1<3)
                    a[i+1][j] = 1 - a[i+1][j];
                if (i-1>=0)
                    a[i-1][j] = 1 - a[i-1][j];
            }            
        }
    }
    for ( int i=0; i<3; i++ )
    {
        for ( int j=0; j<3; j++ )
            cout << a[i][j];
        cout << "\n";
    }
    return 0;
}