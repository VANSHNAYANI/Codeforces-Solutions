#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
    vector<int>arr1(n);
    vector<int>arr2(n);
    vector<int>ans;
    for(auto &it: arr1)
    {
        cin >> it;
    }
    for(auto &it : arr2)
    {
        cin >> it;
    }
 
    for (int i = 0; i < n; i++)
    {
        ans.emplace_back(arr1[i] - arr2[i]);
    }
    
    sort(ans.begin(),ans.end());
 
    if(ans[0] < 0 && ans[1] < 0)
    {
        cout << "NO" << "\n";
        return;
    }else
    {
        for (int i = 1; i < n; i++)
        {
            if(ans[i] < abs(ans[0]))
            {
                cout << "NO" << "\n";
                return;
            }
        }
        cout << "YES" << "\n";
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