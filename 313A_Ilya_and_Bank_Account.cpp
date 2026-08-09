#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    ll n;
    cin >> n;
    vector<int> arr;
 
    if (n >= 0)
    {
        cout << n << "\n";
        return;
    }
    else
    {
        int temp = n;
        int two = 2;
        temp *= -1;
        n *= -1;
        while (two--)
        {
            arr.emplace_back(temp % 10);
            temp /= 10;
        }
    }
 
    if (arr[1] > arr[0])
    {
        cout << -1 *  ((n / 10) - abs(arr[0] - arr[1])) << "\n";
    }
    else
    {
        cout << -1 *  (n / 10) << "\n";
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
 
    solve();
    return 0;
}