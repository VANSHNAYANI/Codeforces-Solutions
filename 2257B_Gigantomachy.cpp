#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> arr1(n);
    vector<ll> arr2(m);
 
    for (auto &it : arr1)
    {
        cin >> it;
    }
    for (auto &it : arr2)
    {
        cin >> it;
    }
 
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
 
    ll bwin = arr1[0];
    ll vwin = arr2[0];
 
    // if(n==1 && m==1)
    // {
    //     if(bwin >= vwin)
    //     {
    //         cout << bwin << "\n";
    //         return;
    //     }
    //     else{
    //         cout << vwin << "\n";
    //         return;
    //     }
    // }
 
    for (int i = 0; i < n-1; i++)
    {
          bwin += 1 + abs(arr1[i] - arr1[i+1]);
    }
    for (int i = 0; i < m-1; i++)
    {
        vwin += 1  + abs(arr2[i] - arr2[i+1]);
    }
    
 
    if(bwin >= vwin)
    {
        cout << 1 << "\n";
    }
    else{
        cout << 2 << "\n";
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