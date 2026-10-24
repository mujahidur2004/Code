/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        int n , x;
        cin >> n >> x;
        vector<int > a;
        a.push_back(0);
        int point ;
        for (int i = 0; i < n; i++){
            cin >> point;
            a.push_back(point);

        }
         a.push_back(x);
         int ans = INT_MIN;
         n+=2;

         for(int i=1;i<n;i++){
            
            if(i== n-1){
                ans = max(ans , (2 * ( a[i]-a[i-1])));
            }
            else{
                ans = max(ans, a[i]-a[i-1]);
            }
         }
         cout << ans <<nl;


        
    }

    return 0;
}