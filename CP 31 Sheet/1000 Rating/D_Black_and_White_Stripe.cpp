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
        long long n, k;
		cin >> n >> k; 
        string s;
		cin >> s;
        vector<long long> prefix(n + 1, 0);
		for (int i = 0; i < n; i++)
			prefix[i + 1] = prefix[i] + (s[i] == 'W'); 
		long long minimum_cells = INT_MAX; 
        for (int i = 0; i <= n - k; i++)
		{
			long long diff = prefix[i + k] - prefix[i];
			minimum_cells = min(minimum_cells, diff);
		}

		cout << minimum_cells << endl;

        
    }

    return 0;
}