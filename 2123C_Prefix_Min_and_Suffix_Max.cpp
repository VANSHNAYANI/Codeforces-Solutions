#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(auto &it : arr)
    {
        cin >> it;
    }
 
    vector<int>pmin(n);
    vector<int>smax(n);
 
    pmin[0] = arr[0];
    int minp = arr[0];
    for (int i = 1; i < n; i++)
    {
        minp = min(minp,arr[i]);
        pmin[i] = minp;
    }
    
    smax[n-1] = arr[n-1];
    int maxs = arr[n-1];
    for (int i = n-2; i >= 0; i--)
    {
         maxs = max(arr[i],maxs);
        smax[i]=maxs;
    }
    
 
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == pmin[i] || arr[i] == smax[i])
        {
            cout<<"1";
        }else{
            cout<<"0";
        }
    }
    cout << "\n";
    return;
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