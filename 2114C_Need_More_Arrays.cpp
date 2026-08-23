#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(auto &it : arr)
    {
        cin >> it;
    }
 
    int cnt = 1;
    int left = 0;
    for (int right = 0; right < n; right++)
    {
        if(arr[right] - arr[left] >= 2)
        {
            cnt++;
            while(left < right)
            {
                left++;
            }
        }
    }
    cout << cnt << "\n";
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