
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
        int n, r, b;
        cin >> n >> r >> b;

        int mxslot = r / (b + 1);
        int rem = r % (b + 1);

        string s = "";

        for (int i = 0; i < b + 1; i++)
        {
            int cnt = mxslot;

            if (rem > 0)
            {
                cnt++;
                rem--;
            }

            for (int j = 0; j < cnt; j++)
                s.push_back('R');

            if (i < b)
                s.push_back('B');
        }

        cout << s << nl;
    }

    return 0;
}
