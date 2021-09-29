#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m[3][3];
    for ( int i=0; i<3; i++ )
        for ( int j=0; j<3; j++ )
            cin >> m[i][j];
    
    // int *x = &(m[0][0]);
    // int *y = &(m[1][1]);
    // int *z = &(m[2][2]);

    // *x + *z = m[0][2] + m[2][0];
    // *x + m[0][1] + m[0][2] = *z + m[1][2];

    m[2][2] = (m[0][2] + m[2][0] + m[0][1] - m[1][2])/2;
    m[0][0] = m[0][2] + m[2][0] - m[2][2];
    m[1][1] = m[0][1] + m[0][2] - m[2][2];
    for ( int i=0; i<3; i++ )
    {
        for (int j=0; j<3; j++)
            cout << m[i][j] << " ";
        cout << "\n";
    }
    return 0;
}