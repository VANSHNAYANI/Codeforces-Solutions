#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int>cost(17);
    vector<int>sizea(17);
 
    cost[0] = 1;
    sizea[0] = 1;
    int base = 4;
    for (int i = 1; i < 17; i++)
    {
        cost[i] = i+1;
        if(i == 1)
        {
            sizea[i] = 4;
            continue;
        }
        sizea[i] = base * 2 + 2;
        base = sizea[i];
    }
 
    // for(auto it : cost)
    // {
    //     cout << it << " ";
    // }
    // cout << "\n";
    // for(auto it : sizea)
    // {
    //     cout << it << " ";
    // }
    for (int i = 0; i < 17 ; i++)
    {
        if(n <= sizea[i])
        {
            cout << cost[i] << "\n";
            return;
        }        
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