#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
    vector<ll>arr(n);
    
    for(auto &it : arr)
    {
        cin >> it;
    }
 
    vector<ll>pmax(n);
    vector<ll>ssum(n);
 
    ll maxy = INT_MIN;
    ll suffixsum = 0;
    int j = n-1;
    for (int i = 0; i < n; i++)
    {
        // pmax :=>
        maxy = max(arr[i],maxy);
        pmax[i] = maxy;
 
        // ssum:=>
        suffixsum += arr[j-i];
        ssum[j-i] = suffixsum;
    }
    ll sum = 0;
    for (int i = n-1; i >= 0; i--)
    {
        if(i == n-1)
        {
            cout << pmax[i] << " ";
            continue;
        }
 
        sum += ssum[i+1];
        cout << pmax[i]+sum << " ";
        sum = 0;
 
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