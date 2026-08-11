#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
    int a;
    int b;
    if(n%2 == 0)
    {   
        cout << "YES" << "\n";
        a = -1;
        b = 1;
        for (int i = 0; i < n/2; i++)
        {
            cout << a << " "  << b <<  " "; 
        }
        cout << "\n";        
    }   
    else if(n == 3)
    {
        cout << "NO" << "\n";
        return;
    }
    else{
        cout << "YES" << "\n";
        int v = n - 2;
        int var2 = 1;
        int var1 = 0;
 
        for (int i = 0; i < n; i++)
        {
            
            if(var1+var2 == v)
            {
                a = var1 * -1;
                b = var2;
                for (int i = 0; i < (n/2); i++)
                {
                    cout << a  << " " << b << " ";
 
                }
                cout << a << "\n";
                return;
            }
            else{
                var1++;
                var2++;
            }
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