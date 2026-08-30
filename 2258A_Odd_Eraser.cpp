#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
ll mygcd(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}
 
void solve()
{
    ll n,maxy=1;
    cin  >> n;
    vector<ll>arr(n);
    for(auto &it : arr)
    {
        cin >> it;
    }
    if(n == 1)
    {
        cout << arr[0] << "\n";
        return;
    }
   
 
    cout << mygcd(arr[0],arr[n-1]) << "\n";
 
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