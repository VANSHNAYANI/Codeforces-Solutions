#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<vector<int>> arr(n, vector<int>(m));
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        sort(arr[i].begin(), arr[i].end());
    }
 
    vector<pair<int, vector<int>>> mppv(n);
 
    for (int i = 0; i < n; i++)
    {
        mppv[i].first = i + 1;
        mppv[i].second = arr[i];
    }
 
    sort(mppv.begin(), mppv.end(),
         [](const auto &a, const auto &b)
         {
             return a.second < b.second;
         });
 
    int maxy = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        for (auto it : mppv)
        {
            if (it.second[i] > maxy)
            {
                maxy = it.second[i];
            }
            else
            {
                cout << -1 << "\n";
                return;
            }
        }
    }
    
    for(auto it : mppv)
    {
        cout << it.first << " ";
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