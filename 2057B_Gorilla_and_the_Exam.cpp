#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int>arr(n);
    map<int, int>mpp;
 
    for (auto &it : arr)
    {
        cin >> it;
        mpp[it]++;
    }
 
    if (n == k)
    {
        cout << 1 << "\n";
        return;
    }
 
    vector<pair<int, int>> mppv(mpp.begin(), mpp.end());
 
    sort(mppv.begin(), mppv.end(), [](auto &a, auto &b)
         { return a.second < b.second; });
 
    int left = 1;
    int right = mpp.size();
 
    for(auto it : mppv)
    {   
        k = k - it.second;
         if(k < 0)
         {
            cout << right - left + 1 << "\n";
            return;
         }else{
            left++;
         }
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