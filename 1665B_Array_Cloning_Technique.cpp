#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{   
    int n;
    cin >> n;
    vector<ll> arr(n);
    map<ll,ll>mpp;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
 
    ll maxfq = INT_MIN;
 
    for(auto it : mpp)
    {
      maxfq = max(maxfq,it.second);
    }
 
    ll rem = abs(maxfq - n);
    if(rem == 0)
    {
        cout << 0 << "\n";
        return;
    }
    if(rem <= maxfq)
    {
        cout << (1 + rem) << "\n";
        return;
    }
    if(rem > maxfq)
    {
        ll grow = maxfq;
        ll clonecost = 0;
        while(grow < n)
        {   
            grow = (2 * grow);
            clonecost++;
        }  
        cout << clonecost + rem  << "\n";
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