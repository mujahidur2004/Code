/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
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
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        map<int, int> MP;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            MP[a[i]]++;
        }
        if (MP[k])
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}