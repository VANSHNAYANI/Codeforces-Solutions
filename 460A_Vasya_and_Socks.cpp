#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n, m;
    cin >> n >> m;
 
    if (n == m)
    {
        cout << n + 1 << "\n";
    }
    else if (n < m)
    {
        cout << n << "\n";
    }
    else
    {
        int gaineddays = n / m;
        int extendeddays = n;
 
        while (gaineddays > 0)
        {
            int firstpoint = extendeddays;           
            extendeddays = extendeddays + gaineddays; 
            int lastpoint = extendeddays;           
 
            gaineddays = (lastpoint / m) - (firstpoint / m); 
        }
 
        cout << extendeddays << "\n";
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
 
// #include <bits/stdc++.h>
// using namespace std;
 
// #define ll long long
// #define endl '\n'
 
// void solve()
// {
//     int n, m;
//     cin >> n >> m;
 
//     if (n < m)
//     {
//         cout << n << "\n";
//         return;
//     }
 
//     int extendeddays = n;
//     int gaineddays = n / m;
 
//     while (gaineddays > 0)
//     {
//         int newextendeddays = extendeddays + gaineddays;
//         // how many NEW multiples of m fall in (extendeddays, newextendeddays]
//         gaineddays = (newextendeddays / m) - (extendeddays / m);
//         extendeddays = newextendeddays;
//     }
 
//     cout << extendeddays << "\n";
// }
 
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
 
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     solve();
 
//     return 0;
// }