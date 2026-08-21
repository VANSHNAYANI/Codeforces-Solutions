#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int l, r, L, R;
    cin >> l >> r >> L >> R;
    int minl = min(l, L);
    int maxr = max(r, R);
 
    if (minl == l && maxr == r || minl == L && maxr == R)
    {
        if (l == L && r == R)
        {
            cout << abs(L - R) << "\n";
        }
        else if (l == L || r == R)
        {
            cout << abs(max(l, L) - min(r, R)) + 1 << "\n";
        }
        else
        {
            cout << abs(max(l, L) - min(r, R)) + 2 << "\n";
        }
    }
    else
    {
        if (L <= r && R >= r)
        {
            cout << abs(max(l, L) - min(r, R)) + 2 << "\n";
           
        }            
        else if (L <= l && R>=l)
        {
             cout << abs(max(l, L) - min(r, R)) + 2 << "\n";
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