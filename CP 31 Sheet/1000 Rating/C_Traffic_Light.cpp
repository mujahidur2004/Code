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
		char color;
		cin >> color; 
        string s;
		cin >> s; 
        s += s;

		n *= 2;

		long long last_green_index = -1;
		long long max_seconds = INT_MIN;

		for (int i = n - 1; i >= 0; i--)
		{
			if (s[i] == 'g')
				last_green_index = i;

			if (s[i] == color)
			{
				long long difference = last_green_index - i;
			
				max_seconds = max(max_seconds, difference);
			}
		}
		cout << max_seconds << endl;
    }

    return 0;
}