#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    string s1;
    cin >> s1;  
 
    int cnt1 = 0;
    int cnt0 = 0;
 
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i] == '1')
        {
            cnt1++;
        }else{
            cnt0++;
        }
 
    }
 
    int lowfq = min(cnt1,cnt0);
    if(lowfq % 2 == 0)cout << "NET" << "\n";
    else{
        cout << "DA" <<"\n";
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