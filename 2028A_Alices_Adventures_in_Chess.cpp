#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n,a,b;
    int x = 0,y = 0;
    cin >> n >> a >> b;
    vector<char>arr(n);
    for(auto &it : arr)
    {
        cin >> it;
    }   
 
    int hundred = 21;
    while(hundred--)
    {
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == 'N')
            {
                y+=1;
            }
            else if(arr[i] == 'S')
            {
                y-=1;
            }
            else if(arr[i] == 'E')
            {
                x+=1;
            }
            else{
                x-=1;
            }
 
            if(x == a && y == b)
            {
                cout << "YES" << "\n";
                return;
            }
        }
 
    }
    cout << "NO" << "\n";
 
 
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