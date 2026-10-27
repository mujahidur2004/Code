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
        int n ,k;
        cin >> n >>k;
        vector<ll> a(n);
        int ans =INT_MAX;
        int cnt=0;
        for (int i = 0; i < n; i++){
             cin >> a[i];
             if(a[i]% 2 == 0)cnt++;
             int add = a[i]%k;
             if(add==0)ans=0;
             else ans = min(ans,k-add );
             

        }
        if(k==4){
            if(cnt >=2)ans=0;
            else if(cnt ==1)ans=min(1,ans);
            else ans =min(ans,2);
        }
        cout<< ans<<nl;
           

        
    }

    return 0;
}