#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string students;
    cin >> students;
    while(t--) 
    {
        bool nf = false;
        for ( int i=0; i<n-1; i++ )
        {

            if (students[i+1] == 'G' && students[i]=='B')
            {
                // cout << "Occ";
                nf = true;
                char te = students[i+1];
                students[i+1] = students[i];
                students[i] = te;
                i++;
            }
        }
        if (!nf) break;        
    }
    cout << students;

    return 0;
}