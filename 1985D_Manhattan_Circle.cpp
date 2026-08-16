#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n,m;
    cin >> n >> m;
    vector<vector<char>> arr(n,vector<char>(m));
 
    
 
    int cnthash = 0;
    int maxhash = 0;
    int ind;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == '#')
            {
                cnthash++;
            }
        }
         if(cnthash > maxhash)
         {
            maxhash = cnthash;
            ind = i;
         }
         cnthash = 0;
    }
 
    // cout<<maxhash<<" "<< ind << "\n";
 
    int ind2;
    int newcount = 0;
    for (int j = 0; j < m; j++)
    {
        if(arr[ind][j] == '#' && newcount == maxhash / 2)
        {
            ind2 = j;
            break;
        }else if(arr[ind][j] == '#')
        {
            newcount++;
        }
    }
 
    cout << ind+1 << " " << ind2+1<< "\n";
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