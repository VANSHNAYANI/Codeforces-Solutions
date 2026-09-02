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
 
    if(arr[0] >= arr[1])
    {
        cout << arr[0] + arr[1] << "\n";
    }
    else if(arr[0] < arr[1])
    {
        cout << 2*arr[0] << "\n";
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