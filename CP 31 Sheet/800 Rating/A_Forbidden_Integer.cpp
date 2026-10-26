
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
        int n, k, x;
        cin >> n >> k >> x;

        if (x != 1)
        {
            cout << "YES" << nl;
            cout << n << nl;

            for (int i = 1; i <= n; i++)
            {
                cout << 1 << " ";
            }
            cout << nl;
        }
        else if (k == 1)
        {
            cout << "NO" << nl;
        }
        else if (x == 1 && k >= 2)
        {
            if (n % 2 == 0)
            {
                cout << "YES" << nl;
                cout << n / 2 << nl;

                for (int i = 1; i <= n / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << nl;
            }
            else if (k >= 3)
            {
                cout << "YES" << nl;
                cout << 1 + (n - 3) / 2 << nl;

                cout << 3 << " ";

                for (int i = 1; i <= (n - 3) / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << nl;
            }
            else
            {
                cout << "NO" << nl;
            }
        }
    }

    return 0;
}
