#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
   ll n;
   cin >> n;
   
    ll qutiont  = n / 2020;
    ll rem = n % 2020;
 
    if(rem <= qutiont)
    {
        cout << "YES" << "\n";
    }else{
        cout << "NO"  << "\n";
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