#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    vector<int> arr2(n);
    for (auto &it : arr)
    {
        cin >> it;
    }
    for (auto &it : arr2)
    {
        cin >> it;
    }
    
    int sum;
    int cmp = -2;
    for (int i = 0; i < n; i++)
    {
        if (arr2[i] == -1)
        {
            continue;
        }
        else if (arr2[i] != -1 && cmp == -2)
        {
            cmp = arr[i] + arr2[i];
            sum = cmp;
        }
        else{
            sum = arr[i] + arr2[i];
            if(sum == cmp)
            {
                continue;
            }
            else{
                cout << 0 <<"\n";
                return;
            }
        }
    }
 
    int negativeonecnt = count(arr2.begin(),arr2.end(),-1);
    if(negativeonecnt == 0)
    {
        cout << 1 << "\n";
        return;
    }
    if(negativeonecnt == n)
    {
        sort(arr.begin(),arr.end());
        int value  =  (k - abs(arr[0] - arr[n-1])) + 1; 
        if(value > 0)
        {
            cout << value << "\n";
            return;
        }else{
            cout << 0 << "\n";
            return;
        }
    }
    else{
        for(int i = 0; i < n; i++)
        {
            if(arr2[i] == -1)
            {
                if(sum <= (arr[i] + k) && arr[i] <= sum)
                {
                    continue;
                }
                else{
                    cout << 0<<"\n";
                    return;
                }
            }
        }
        cout << 1 << "\n";
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