#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
 
    string s1;
    cin >> s1;
 
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '1')
            cnt1++;
    }
 
    if (cnt1 == 2)
    {
        for (int i = 0; i < n-1; i++)
        {
            if(s1[i]=='1' &&  s1[i+1] == '1')
            {
                cout << "NO" << "\n";
                return;
            }
        }
        
    }
    if (n == 1 && s1[0] == '0')
    {
        cout << "YES" << "\n";
        return;
    }
    if (cnt1 % 2 == 0)
    {
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";
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