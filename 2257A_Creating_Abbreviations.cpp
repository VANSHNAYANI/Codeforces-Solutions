#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n, k;
    cin >> n >> k;
 
    map<char, int> mpp;
 
    for (int i = 0; i < n; i++)
    {
        string s1;
        cin >> s1;
        mpp[toupper(s1[0])]++;
    }
 
    string s2;
    vector<string> arr2;
 
    for (int i = 0; i < k; i++)
    {
        cin >> s2;
        arr2.emplace_back(s2);
    }
 
    for (int i = 0; i < arr2.size(); i++)
    {
        for (int j = 0; j < arr2[i].size(); j++)
        {
            if (mpp[arr2[i][j]] >= 1)
            {
                continue;
            }
            else
            {
                cout << "NO" << "\n";
                return;
            }
        }
    }
    cout << "YES" << "\n";
    return;
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