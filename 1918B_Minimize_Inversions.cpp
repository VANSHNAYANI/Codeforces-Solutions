#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
   int n;
   cin >> n;
   pair<int,int>ab[n];
 
   for(auto &it : ab){
    cin >> it.first;
   }
   for(auto &it : ab)
   {
    cin >> it.second;
   }
 
   sort(ab,ab+n);
 
   for(auto it : ab)
   {
    cout << it.first << " ";
   }
   cout << "\n";
   for(auto it : ab)
   {
    cout << it.second << " ";
   }
   cout << "\n";
 
 
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