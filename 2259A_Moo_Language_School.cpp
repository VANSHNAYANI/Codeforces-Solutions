#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n,k;
    string s1;
    cin >> n >> k >> s1;  
    vector<char> arr(n+1);
    
    for (int i = 1; i <= n; i++)
    {
        arr[i] = s1[i-1];
    }
 
 
 
    // for(auto it : arr)
    // {
    //     cout << it << " ";
    // }
 
    int cntone=0;
    int ans=0;
    for (int i = 1; i <= n; i++)
    {
        if(arr[i] == '1')
        {
            cntone+=1;
        }
        if(i % k == 0)
        {
            if(k == cntone)
            {
                ans+=1;
                cntone = 0;
            }
            else{
                cntone = 0;
            }
        }
    }
    
    cout << ans << "\n";
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