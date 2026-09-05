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
 
    int oddcnt = 0;
    int eevencnt = 0;
    int eoddcnt = 0;
 
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            oddcnt+=1;
        }
        else{
            if((arr[i] / 2)%2 != 0)
            {
                eoddcnt+=1;
            }
            else{
                eevencnt+=1;
            }
        }
    }
    
    cout << max(oddcnt,max(eevencnt,eoddcnt))<<"\n";
 
 
 
 
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