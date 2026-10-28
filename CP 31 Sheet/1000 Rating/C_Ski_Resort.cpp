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
        int n , k,q;
        cin >> n >> k >> q;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll   ans =0,cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]<=q){
                cnt++;
            }
            else{
                cnt= max(0LL, cnt-k+1);
                ans+=(( cnt * (cnt+1))/2);
                cnt=0;
            }
        }
        cnt= max(0LL, cnt-k+1);
                ans+=(( cnt * (cnt+1))/2);
        cout<<ans<<nl;

        
    }

    return 0;
}