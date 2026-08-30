#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solution(string s1,vector<int>arr)
{
    int n = arr.size();
    map<char, int>mppcharint;
    map<int,char>mppintchar;
    for (int i = 0; i < n; i++)
    {
        if (mppcharint.find(s1[i]) == mppcharint.end())
        {
            if(mppintchar.find(arr[i]) == mppintchar.end())
            {
                mppcharint[s1[i]] = arr[i];
                mppintchar[arr[i]] = s1[i];
            }
            else{
                cout << "NO" << "\n";
                return;
            }
        }
        else
        {
            if (mppcharint[s1[i]] == arr[i])
            {
                continue;
            }
            else
            {
                cout << "NO" << "\n";
                return;
            }
        }
    }
    cout << "YES" << "\n";
    return;
}
 
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
    {
        cin >> it;
    }
    int ns;
    cin >> ns;
    for (int i = 0; i < ns; i++)
    {
        string s1;
        cin >> s1;
 
        if (s1.size() != arr.size())
        {
            cout << "NO" << "\n";
            continue;
        }
        solution(s1,arr);
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