#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
 
 
    vector<int>col(26,0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
 
        for (int j = 0; j < 26; j++)
        {
            if(col[j] == x)
            {
                cout << (char)('a' + j);
                col[j]++;
                break;
            }
        }
      
 
    }
      cout << "\n";
    
 
    
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