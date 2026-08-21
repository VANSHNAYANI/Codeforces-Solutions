#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    ll n,k;
    cin >> n >> k;
    
    if(n == 1 && k == 2)
    {
        cout << "YES" << "\n";
        return;
    }
    else if(n>1 && k>1)
    {
        cout << "NO" << "\n";
        return;
    }else{
        if(n==1)
        {
            cout << "NO" << "\n";
            return;
        }
        for (int i = 2; i <= sqrt(n); i++)
        {
            if(n%i == 0)
            {
                cout << "NO" << "\n";
                return;
            }
        }
        cout << "YES" << "\n";
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