#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
  int n; 
  cin >> n;
  vector<int>a(n);
  vector<int>b(n);
  for(auto &it : a)
  {
    cin >> it;
  }
  for(auto &it : b)
  {
    cin >> it;
  }
 
    int min1 = INT_MAX;
    int min2 = INT_MAX;
  for (int i = 0; i < n; i++)
  {
        if(a[i] < min1)
        {
            min1 = a[i];
        }
 
        if(b[i] < min2)
        {
            min2 = b[i];
        }
 
  }
  
    ll sum1 = 0;
    ll sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += (b[i]+min1);
        sum2 += (a[i]+min2);
    }
    
    if(sum1 < sum2)
    {
        cout << sum1 << "\n";
    }
    else{
        cout << sum2 << "\n";
    }
 
 
 
}
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}