#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
// Euclidean Algorithm GCD:=>
 
long long gcd(long long a, long long b)
{
    while (b)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
 
// LCM :=>
 
long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}
 
void solve()
{
    int n, k;
    cin >> n >> k;
 
    vector<int> arr1;
    vector<int> arr2;
 
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == k && b == k)
        {
            ans = 0;
        }
        else
        {
            arr1.emplace_back(a);
            arr2.emplace_back(b);
        }
    }
    if(ans == 0)
    {
        cout << "YES" << "\n";
        return;
    }
 
    // for(auto it: arr1)
    // {
    //     cout << it << " ";
    // }
    // cout << "\n";
    // for(auto it : arr2)
    // {
    //     cout << it << " ";
    // }
 
    int v1 = 0;
    int v2 = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == k)
        {
            v1 = 1;
        }
        if (arr2[i] == k)
        {
            v2 = 1;
        }
    }
    if (v1 && v2)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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