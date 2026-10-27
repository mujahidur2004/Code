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
        long long a, b;
		cin >> a >> b; 
        if (b > a)
			swap(a, b);

		if (a == b)
			cout << 0 << " " << 0 << endl;
		else
		{
			long long gans = a - b;

			long long moves = min(b % gans, gans- b % gans);

			cout << gans << " " << moves << endl;
        }
        
    }

    return 0;
}