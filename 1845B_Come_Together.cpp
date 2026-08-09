#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
   int a1,a2,b1,b2,c1,c2;
   cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
 
   int ans = 1;
   if(a1 > b1 && a1 > c1 || a1 < b1 && a1 < c1)
   {
        ans += min(abs(a1 - b1) , abs(a1 - c1));
   }
   if(a2 > b2 && a2 > c2  || a2 < b2 && a2 < c2)
   {
        ans += min(abs(a2 - b2),abs(a2 - c2)); 
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