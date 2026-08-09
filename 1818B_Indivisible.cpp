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
    int n;
    cin >> n;
 
    if(n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    else if(n&1)
    {
        cout << -1 << "\n";
        return;
    }
    else{
        for (int i = 2; i <= n; i+=2)
        {
            cout << i << " " <<  i - 1 << " ";
        }
        cout << "\n";
        
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