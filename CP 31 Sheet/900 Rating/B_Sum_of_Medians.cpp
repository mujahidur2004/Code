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
        int n , k;
        cin >> n >> k;
        vector<ll> a(n *k);

        for (int i = 0; i < n * k; i++)
            cin >> a[i];

        
        ll ans=0;
        long long pointer = n * k; 
		long long sum = 0; 
        while (k--) {
			pointer -= (n / 2 + 1); 
            sum += a[pointer]; 
        }
		cout << sum << endl;
    }

    return 0;
}