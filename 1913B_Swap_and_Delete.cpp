#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    string s1;
    cin >> s1;
    vector<int> arr(2, 0);
    int n = s1.size();
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '0')
        {
            arr[0]++;
        }
        else
        {
            arr[1]++;
        }
    }
 
    if (arr[0] == arr[1])
    {
        cout << 0 << "\n";
        return;
    }
 
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '0')
        {
            if (arr[1] == 0)
            {
                cout << abs(n - i) << "\n";
                return;
            }
            arr[1]--;
        }
        else
        {
            if (arr[0] == 0)
            {
                cout << abs(n - i) << "\n";
                return;
            }
            arr[0]--;
    
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