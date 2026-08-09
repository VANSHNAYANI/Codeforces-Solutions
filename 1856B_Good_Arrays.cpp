#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(auto &it : arr)
    {
        cin >> it;
    }
    
    int cnt1 = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
            if(arr[i] == 1)cnt1++;
            sum+=arr[i];
    }
    
 
    if(n == 1)
    {
        cout << "NO" << "\n";
        return;
    }
 
    if(cnt1 > n/2)
    {
       int ans =  cnt1 * 2;
       int rem = n - cnt1;
       if(ans + rem <= sum)
       {
        
        cout << "YES" << "\n";
       }
       else{
        cout << "NO" <<  "\n";
       }
    }
    else{
        cout << "YES" << "\n";
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