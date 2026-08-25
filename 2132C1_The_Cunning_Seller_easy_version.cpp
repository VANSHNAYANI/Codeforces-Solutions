#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    ll n;
    cin >> n;
 
    vector<ll> quantity(22);
    vector<ll> price(22);
 
    for (int i = 0; i <= 21; i++)
    {
        quantity[i] = pow(3, i);
        if (i == 0)
        {
            price[i] = 3;
            continue;
        };
        price[i] = (price[i - 1] * 3) + quantity[i - 1];
    }
 
    ll ans = 0;
    
    for(int i = 21; i>=0; i--)
    {
    int cnt = n/quantity[i];
    ans+= (cnt * price[i]);
    n%=quantity[i];
    }
    cout << ans << "\n";
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