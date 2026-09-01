#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n, k;
    string s1;
    cin >> n >> k >> s1;
 
    int onecnt = count(s1.begin(), s1.end(), '1');
    int zerocnt = count(s1.begin(), s1.end(), '0');
    int twocnt = count(s1.begin(), s1.end(), '2');
 
    vector<char> ans(n, '+');
 
    // for (int i = 0; i < n; i++)
    // {
    //     if(i < zerocnt + twocnt  || i >= n - onecnt - twocnt)ans[i] = '?';
    //     if(i < zerocnt ||i >= n - onecnt || k == n)ans[i] = '-';
    // }
 
    // for(auto it : ans)
    // {
    //     cout << it;
    // }
    // cout << "\n";
 
    if (k == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "-";
        }
        cout << "\n";
        return;
    }
 
    for (int i = 0; i < zerocnt; i++)
    {
        ans[i] = '-';
    }
 
    for (int i = n - onecnt; i < n; i++)
    {
        ans[i] = '-';
    }
 
    int left = zerocnt;
    int right = n - onecnt - 1;
    while (twocnt-- && left <= right)
    {
        ans[left] = '?';
        ans[right] = '?';
        left++;
        right--;
    }
 
    for (auto it : ans)
    {
        cout << it;
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