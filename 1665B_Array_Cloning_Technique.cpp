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
        if(it.second > maxfq)
        {
            maxfq = it.second;
        }
    }
 
    ll rem = abs(maxfq - n);
 
    int m = maxfq;
    int opr = 0;
    while(m < n)
    {
        rem =  n - m;
        if(m < rem)
        {
            opr += (m + 1);
            m = 2*m;
        }
        else{
             opr += (1 + rem);
             break;
        }
    }
    cout << opr << "\n";
   
 
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