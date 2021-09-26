#include <bits/stdc++.h>
using namespace std;

int pivot( vector<int>& a )
{
	int n = a.size();
    vector<int> sum(n+1, 0);
    for ( int i=0; i<n; i++ )
      sum[i+1] = sum[i] + a[i];
    for ( int i=0; i<n; i++ )
      if (sum[i] == sum[n] - sum[i+1])
        return i;
  return -1;
}

int main() 
{
    srand(time(NULL));

  	int n = 1 + rand()%50;
  	cout << n << "\n";
    vector<int> a(n);
  	for ( int i=0; i<n; i++ )
      {
          a[i] = rand()%100;
          cout << a[i] << "\n";
      }
  	cout << pivot(a);
    return 0;
}