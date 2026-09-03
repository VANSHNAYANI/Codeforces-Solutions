#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int a,b;
    cin >> a >> b;
    if(a == 0 && b == 0)
    {
        cout << 0 << "\n";
        return;
    }
 
    if(a == b)
    {
        cout << 1 << "\n";
        return;
    }
    else if((a+b)%2 != 0)
    {
        cout << -1 << "\n";
        return;
    }
    else if((a+b) % 2 == 0)
    {
        cout << 2 << "\n";
        return; 
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