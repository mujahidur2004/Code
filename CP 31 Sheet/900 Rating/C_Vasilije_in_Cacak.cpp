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
         ll n , k , x;
         cin >> n >>k >> x;
         long long minimum_sum = (k * (k + 1)) / 2;

		long long maximum_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

		if (x >= minimum_sum && x <= maximum_sum)
			cout << "YES" << endl; 
		else
			cout << "NO" << endl;
         

        
    }

    return 0;
}