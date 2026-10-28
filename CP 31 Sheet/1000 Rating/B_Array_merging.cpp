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
        vector<long long> a(n);
		for (long long i = 0; i < n; i++)
			cin >> a[i];

		
		vector<long long> b(n);
		for (long long i = 0; i < n; i++)
			cin >> b[i];

		vector<long long> longest_subarray_a(2 * n + 1, 0);
		vector<long long> longest_subarray_b(2 * n + 1, 0);

		long long counter = 1; 
        for (int i = 1; i < n; i++)
		{
			if (a[i] == a[i - 1])
				counter++;
			else
			{
				longest_subarray_a[a[i - 1]] = max(longest_subarray_a[a[i - 1]], counter);
				counter = 1; 
            }
		}
		longest_subarray_a[a[n - 1]] = max(longest_subarray_a[a[n - 1]], counter);

		counter = 1; 

		for (int i = 1; i < n; i++)
		{
			if (b[i] == b[i - 1])
				counter++;
			else
			{
				longest_subarray_b[b[i - 1]] = max(longest_subarray_b[b[i - 1]], counter);
				counter = 1; 
            }
		}
		longest_subarray_b[b[n - 1]] = max(longest_subarray_b[b[n - 1]], counter);

		long long max_freq = -1; 
        for (int i = 1; i <= 2 * n; i++)
			max_freq = max(max_freq, longest_subarray_a[i] + longest_subarray_b[i]);

		cout << max_freq << endl;
    }

    return 0;
}