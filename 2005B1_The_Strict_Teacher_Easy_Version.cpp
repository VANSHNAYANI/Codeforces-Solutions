#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n,m,q,m1,m2,q1;
    cin >> n >> m >> q >> m1 >> m2 >> q1;
 
    if(m1 > m2)
    {
        swap(m1,m2);
    }
 
    if(q1 <= m2 && q1 >= m1)
    {
        cout << (m2 - m1) / 2 << "\n";
    }
    else if(q1 < m1)
    {
        cout << m1 - 1 << "\n";
    }
    else if(q1 > m2)
    {
        cout << n - m2 << "\n";
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