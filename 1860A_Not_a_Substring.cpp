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
    string s1;
    cin >> s1;
    int n = s1.size();
 
    if(n == 2 && s1[0] == '(' && s1[1] == ')')
    {
        cout << "NO" << "\n";
        return;
    }
 
    for (int i = 0; i < n-1; i++)
    {
        if(s1[i]!=s1[i+1])
        {
            continue;
        }
        else{
            cout << "YES" << "\n";
            for (int i = 0; i < 2*n; i++)
            {
                if(i%2 == 0)
                {
                    cout << '(';
                }
                else{
                    cout << ')';
                }
            }
            cout << "\n";
            return;
        }
    }
 
    cout << "YES" << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << '(';
    }
    for (int i = 0; i < n; i++)
    {
        cout << ")";
    }
    cout << "\n";
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