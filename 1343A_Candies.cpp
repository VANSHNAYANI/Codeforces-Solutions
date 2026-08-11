#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    ll tt;
    cin >> tt;
 
 
 
 
    int sum = 1;
    for (ll i = 2; i < tt; i = i * 2)
    {
        sum += i;
        if (tt % sum == 0)
        {   
            cout << tt / sum  << "\n";
            return;
        }
    }
    return;
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