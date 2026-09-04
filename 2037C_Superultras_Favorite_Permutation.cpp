#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> even;
    vector<int> odd;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even.emplace_back(i);
        }
        else
        {
            odd.emplace_back(i);
        }
    }
 
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            int chk = even[even.size() - 1] + i;
            if (chk % 2 == 0 && chk > 2 || chk % 3 == 0 && chk > 3 || chk % 5 == 0 && chk > 5 || chk % 7 == 0 && chk > 7)
            {
                even.emplace_back(i);
 
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2 != 0 && j != i)
                    {
                        even.emplace_back(j);
                    }
                }
                break;
            }
        }
        else
        {
            continue;
        }
    }
 
    if (even.size() == n)
    {
        for (auto it : even)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
    else
    {
        // for (auto it : even)
        // {
        //     cout << it << " ";
        // }
        // cout << "\n";
        cout << -1 << "\n";
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