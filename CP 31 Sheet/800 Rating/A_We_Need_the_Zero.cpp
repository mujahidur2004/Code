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
        int n;
        cin >> n;
        vector<ll> a(n);
        ll x=0;

        for (int i = 0; i < n; i++){
             cin >> a[i];
             x ^= a[i];
        }
        if(n%2)cout<< x<<nl;
        else {
            if(x==0)cout<< 0<<nl;
            else cout<<-1<<nl;
        }
           

        
    }

    return 0;
}