#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    ll n1;
    cin >> n1;
    int cnt = 0;
 
    if(n1 == 1)
    {
        cout << 0 << "\n";
        return;
    }
 
    while (n1 > 0)
    {
        if (n1 % 6 == 0)
        {
            cnt++;
            n1 = n1 / 6;
        }
        else if (n1 % 6 == 3)
        {
            cnt++;
            n1 = n1 * 2;
        }
        else
        {
            cout << -1 << "\n";
            return;
        }
 
        if (n1 <= 1)
        {
            cout << cnt << "\n";
            return;
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