#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
    
    vector<int>arr(n);
    map<int,int>mpp;
 
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
 
    int cnt1 =  0;
    int cnto = 0;
    for(auto it : mpp)
    {
        if(it.second == 1 )
        {   
            cnt1++;
        }
        else{
            cnto++;
        }
    }
 
    cout << (2 * ceil(ceil(1.0*cnt1/2))) + cnto << "\n";
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