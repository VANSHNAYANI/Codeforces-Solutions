#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for(auto &it : arr )
        {
            cin >> it;
        }
 
        int sum = 0;
        map<int,int>mpp;
        for (int i = 0; i < n; i++)
        {
             sum += arr[i];
             mpp[arr[i]]++;
        }
        
        int element;
        int maxfq = 0;
        for(auto it : mpp)
        {
            if(it.second > maxfq)
            {
                maxfq  = it.second;
                element = it.first;
            }
        }
        
        int rem = abs(n  - maxfq);
        if(maxfq > rem+1 )
        {
             sum -= abs(rem - maxfq) * element;
             sum += (2 * element);
             cout << sum << "\n";
        }else{
            cout << sum << "\n";
        }
 
 
 
    }
 
 
 
    return 0;
}