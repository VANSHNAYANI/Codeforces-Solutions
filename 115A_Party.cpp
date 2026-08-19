#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
    map<int, int> mpp;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        mpp[i] = a;
    }
 
    int cnt = 1;
    int maxcnt = 1;
    for (auto it : mpp)
    {
        int b = it.second;
        for (int i = 0; i < n; i++)
        {
            if (mpp.find(b) != mpp.end())
            {
                b = mpp[b];
                cnt++;
            }
            else{
                break;
            }
        }
        maxcnt = max(cnt,maxcnt);
        cnt = 1;
    }
    cout << maxcnt << "\n";
}
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
    return 0;
}