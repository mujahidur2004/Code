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
        ll  n , x;
        cin >> n >> x;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
         
        ll ansmi=0, ansma=0, sum=0;
        for(int i=0;i<n;i++){
            sum+= a[i];
             ansma  += ceil(a[i] * 1.0 /x);

        }
        ansmi = ceil(sum * 1.0 / x);
        cout << ansmi<<" "<< ansma<<nl;

        
    }

    return 0;
}