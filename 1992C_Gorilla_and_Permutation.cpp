#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n,m,k;
    cin >> n >> m >> k;
    vector<int>arr(n);
    
    for (int i = 1; i <= n; i++)
    {   
        arr[i-1]=i;
    }
    sort(arr.begin(),arr.end(),greater<int>());
    sort(arr.begin() + (n - m),arr.end());
    for(auto it : arr)
    {
        cout << it << " ";
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