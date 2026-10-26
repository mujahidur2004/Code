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
        long long n;
		cin >> n; 
        if (n < 4 || n % 2 == 1)
			cout << -1 << nl; 
		else
		{
		
			
			 long long min_buses = (n + 5) / 6; 
			long long max_buses = n / 4;    
			cout << min_buses << " " << max_buses << nl;
        }

        
    }

    return 0;
}