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

        long long sumSecond = 0;
        long long minFirst = LLONG_MAX;
        long long minSecond = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;

            long long first = LLONG_MAX;
            long long second = LLONG_MAX;

            for (int j = 0; j < m; j++) {
                long long x;
                cin >> x;

                if (x < first) {
                    second = first;
                    first = x;
                } else if (x < second) {
                    second = x;
                }
            }

            minFirst = min(minFirst, first);
            minSecond = min(minSecond, second);
            sumSecond += second;
        }

        cout << sumSecond - minSecond + minFirst << '\n';
    
    }

    return 0;
}