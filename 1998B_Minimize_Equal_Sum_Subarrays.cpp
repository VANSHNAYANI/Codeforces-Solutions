#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(auto &it : arr)cin >> it;
 
    for (int i = 0; i < n; i++)
    {
        arr[i]-=1;
        if(arr[i] == 0)
        {
            arr[i] = n;
        }
    }
 
    for(auto it : arr)
    {
        cout << it << " ";
    }
    cout  << "\n";
 
    
 
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