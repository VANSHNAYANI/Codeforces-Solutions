#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    string s1;
    cin >> s1;
 
    if(s1.size() == 1)
    {
        cout << 0 << "\n";
        return;
    }
 
    int lock = 0;
    int cnt0 = 0;
 
    for (int i = s1.size()-1;i >= 0; i--)
    {
        if(s1[i]!= '0')
        {
            lock = 1;
            continue;
        }
        if(s1[i] == '0' && lock)
        {
             cnt0++;
        }
    }
    
    if(lock)
    {
        cout << s1.size() - (cnt0 + 1) << "\n";
    }else{
        cout << s1.size()-1 << "\n";
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