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
        ll a1,b ,n;
        cin >> a1>>b >> n;
        vector<ll> a(n);
        ll ans = b;

        for (int i = 0; i < n; i++){
            cin >> a[i];
            ans += (min(a[i], a1-1));

        }
        cout<< ans<<nl;
            

        
    }

    return 0;
}