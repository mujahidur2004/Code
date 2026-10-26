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
		vector<long long> v(n);
		for (long long i = 0; i < n; i++) 
			cin >> v[i];

		long long answer = v[n - 1] - v[0];

		for (int i = 1; i < n; i++)
			answer = max(answer, v[i] - v[0]);

		for (int i = 0; i < n - 1; i++)
			answer = max(answer, v[n - 1] - v[i]);

		for (int i = 0; i < n - 1; i++)
			answer = max(answer, v[i] - v[i + 1]);

		cout << answer << endl;

        
    }

    return 0;
}