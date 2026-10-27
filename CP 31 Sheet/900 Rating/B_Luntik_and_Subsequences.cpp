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
        ll n;
        cin >> n;
        vector<ll> a(n);
        map<ll,ll>mp;

        for (int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;

        }
        cout << ((1LL << mp[0]) * mp[1]) << nl;
            

        
    }

    return 0;
}