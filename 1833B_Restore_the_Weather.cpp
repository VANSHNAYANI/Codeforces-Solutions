#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n,l;
    cin >> n >> l;
 
    vector<pair<int,int>>arr(n);    
    vector<int>res(n);
 
    int k = 0;
    for(auto &it : arr)
    {
        cin >> it.first;
        it.second = k;
        k++;
    }
 
    for(auto &it : res)
    {
        cin >> it;
    }
 
    sort(arr.begin(),arr.end());
    sort(res.begin(),res.end());
 
    vector<int>ans(n);
 
    for (int i = 0; i < n; i++)
    {
            ans[arr[i].second] = res[i];
    }
 
    for(auto &it : ans)
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