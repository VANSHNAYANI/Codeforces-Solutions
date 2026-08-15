#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
    map<int,int>mpp;
    vector<int>ans(1);
 
    for(int i = 0; i < (n*n); i++)
    {
        int test;
        cin >> test;
 
        if(mpp[test] == 0)
        {
            mpp[test]++;
            ans.emplace_back(test);
        }
        else{
            continue;
        }
    }
    
    int sum = 0;
    int osum = 0;
    for (int i = 1; i < ans.size(); i++)
    {
       sum  += ans[i];
       osum += i;
    }
    osum+=ans.size();
    ans[0] = abs(osum - sum);
 
    for(auto it : ans)
    {
        cout << it <<" ";
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