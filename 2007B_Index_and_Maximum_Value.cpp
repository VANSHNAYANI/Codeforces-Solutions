#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    ll n, m;
    ll a, b;
    char opr;
    cin >> n >> m;
    vector<ll> arr(n);
    for (auto &it : arr)
    {
        cin >> it;
    }
    
    sort(arr.begin(), arr.end());
    ll maxelement = arr[n - 1];
 
    for (int i = 0; i < m; i++)
    {
        cin >> opr >> a >> b;
        if(maxelement >= a && maxelement <= b)
        {
                if(opr == '+')
                {
                    maxelement++;
                    cout << maxelement << " ";
                    continue;
                }else{
                    maxelement--;
                    cout << maxelement << " ";
                    continue;
                }
        }else{
            cout << maxelement <<" ";
        }
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