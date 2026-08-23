#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int arr1[2] = {a, b};
    int arr2[2] = {c, d};
    int ans = 0;
 
    for (int i = 0; i < 2; i++)
    {
 
        for (int j = 0; j < 2; j++)
        {
            int st = 0;
            int s = 0;
            if (arr1[i] > arr2[j])
            {
                s++;
            }
            else if (arr1[i] < arr2[j])
            {
                st++;
            }
 
            if (arr1[1 - i] > arr2[1 - j])
            {
                s++;
            }
            else if (arr1[1 - i] < arr2[1 - j])
            {
                st++;
            }
 
            if (s > st)
            {
                ans++;
            }
        }
    }
    cout << ans << "\n";
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