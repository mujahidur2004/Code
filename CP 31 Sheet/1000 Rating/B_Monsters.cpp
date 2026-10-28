
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
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> a(n);

        for (int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;

            int rem = ele % k;

            if (rem == 0)
                rem = k;

            a[i] = {rem, i + 1};
        }

        sort(a.begin(), a.end(), [](auto x, auto y)
        {
            if (x.first == y.first)
                return x.second < y.second;

            return x.first > y.first;
        });

        for (auto ele : a)
        {
            cout << ele.second << " ";
        }

        cout << nl;
    }

    return 0;
}
