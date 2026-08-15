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
 
    sort(arr.begin(),arr.end());
 
    int left = 0;
    int right = arr.size()-1;
    int count = 0;
 
    while(left < right)
    {
        if(arr[left] + arr[right] == k)
        {
            count++;
            left++;
            right--;
        }
        else if(arr[left] + arr[right] > k)
        {
            right--;
        }
        else if(arr[left] + arr[right] < k)
        {
            left++;
        }
    }
 
 
    cout << count << "\n";
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