#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
// Euclidean Algorithm GCD:=>
 
long long gcd(long long a, long long b)
{
    while (b)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
 
// LCM :=>
 
long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}
 
 
void solve()
{
  int n;
  cin >> n;
  vector<int>arr(n);
  for(auto &it : arr)
  {
    cin >> it;
  }
 
  int cnt0 = 0;
  int cnt1 = 0;
  for (int i = 0; i < n; i++)
  {
    if(arr[i] == 0)cnt0++;
    if(arr[i] == 1)cnt1++;
  } 
    
  if( cnt0 <= ceil(n/2.0))
  {
    cout << 0 <<"\n";
   
  }
  else{
    if(n == cnt0 + cnt1 && cnt1 > 0)
    {  
        cout << 2 << "\n";
    }
    else
    {
        cout << 1 << "\n";
    }
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