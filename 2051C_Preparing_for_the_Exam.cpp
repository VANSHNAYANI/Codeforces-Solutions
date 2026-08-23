#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arrm(m);
    vector<int> arrk(k);
 
    for (auto &it : arrm)
    {
        cin >> it;
    }
    for (auto &it : arrk)
    {
        cin >> it;
    }
 
    if (n - k > 1)
    {
        for (int i = 0; i < m; i++)
        {
            cout << "0";
        }
        cout << "\n";
        return;
    }
    else if (n - k < 1)
    {
        for (int i = 0; i < m; i++)
        {
            cout << "1";
        }
        cout << "\n";
        return;
    }
    else if (n - k == 1)
    {
       unordered_map<int,int>mpp;
       for(auto it : arrk)
       {
        mpp[it]++;
       }
       for(auto it : arrm)
       {
            if(mpp[it])
            {
                cout<<"0";
            }else{
                cout<<"1";
            }
       }
       cout<<'\n';
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