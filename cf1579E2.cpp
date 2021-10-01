#include<bits/stdc++.h>
using namespace std;

int merge(vector<int>& a, vector<int>& temp, int left, int mid, int right)
{
    int i, j, k;
    int cnt = 0;
    i = left; 
    j = mid;
    k = left;
    while( i<mid && j<=right )
    {
        if (a[i] <=a[j])
            temp[k++] = a[i++];
        else
            {
                cnt += (mid-i);
                temp[k++] = a[j++];
            }
    }
    while(i<mid)
        temp[k++] = a[i++];
    while(j<=right)
        temp[k++] = a[j++];
    for (int i=left; i<=right; i++)
        a[i] = temp[i];
return cnt;
}

int mergeSort(vector<int>& a, vector<int>& temp, int l, int r)
{
    int mid, cnt = 0;
    if (r > l) 
    {
        mid = (r + l) / 2;
        cnt += mergeSort(a, temp, l, mid);
        cnt += mergeSort(a, temp, mid+1, r);
        cnt += merge(a, temp, l, mid+1, r);
    }
return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin >> a[i];
        deque<int> q;
        q.push_back(a[0]);
        for (int i=1; i<n; i++)
            {
                if (a[i] > q.front())
                    q.push_back(a[i]);
                else
                    q.push_front(a[i]);
            }
        vector<int> f(n);
        for ( int i=0; i<n; i++ )
        {
            f[i] = q.front();
            q.pop_front();
        }
        vector<int> temp(n);
        cout << mergeSort(f, temp, 0, n-1) << "\n";
    }

    return 0;
}