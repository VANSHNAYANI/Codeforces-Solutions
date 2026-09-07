#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    string s1;
    cin >> n >> s1;
 
    vector<int> pref(n + 1, 0);
    vector<int> suff(n + 1, 0);
    int cnt = 0;
    bool chk[26] = {false};
    bool chk2[26] = {false};
    int maxy = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (chk[s1[i] - 'a'] == false)
        {
            chk[s1[i] - 'a'] = true;
            cnt += 1;
        }
        pref[i+1] = cnt;
    }
    cnt = 0;
    for (int i = n-1; i>=0; i--)
    {
        if(chk2[s1[i]-'a'] == false)
        {
            chk2[s1[i] - 'a'] = true;
            cnt+=1;
        }
        suff[i] = cnt;
    }
 
    for (int i = 1; i <= n-1; i++)
    {
        maxy = max(maxy,pref[i]+suff[i]);
    }
    cout << maxy << "\n";
    
 
    
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