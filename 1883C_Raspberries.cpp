#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n,k;
    cin >> n >> k;
    vector<int>arr(n);
    for(auto &it : arr)
    {
        cin >> it;
    }
    // formula to find closet number to multiple of k 
    int miny = INT_MAX;
    int evencnt=0;
    for (int i = 0; i < n; i++)
    {   
        if(arr[i]%2==0)evencnt+=1;
        if(arr[i]%k == 0)
        {
            miny = 0;
        }else{
            miny = min(miny,k-arr[i]%k);   
        }
    }
 
    if(k!=4)
    {
        cout << miny << "\n";
        return;
    }else
    {
        if(evencnt >= 2)
        {
            cout << 0 << "\n";
        }else if(evencnt == 1){
            cout << min(miny,1) <<"\n";
        }else{
            cout << min(2,miny) << "\n";
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