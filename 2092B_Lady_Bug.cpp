#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
    string s1;
    string s2;
    cin >> s1 >> s2;
 
    int azeros = 0;
    int bzeros = 0;
    int apivot = 0;
    int bpivot = 0;
    for (int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            if(s1[i] == '0')
            {
                azeros+=1;
            }
            if(s2[i] == '0')
            {
                bzeros+=1;
            }
            apivot +=1;
        }
        else{
            if(s2[i] == '0')
            {
                azeros++;
            }
            if(s1[i] == '0')
            {
                bzeros++;
            }
            bpivot += 1;
        }
    }
    
    if(azeros >= apivot && bzeros >= bpivot)
    {
        cout << "YES" << "\n";
    }else{
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