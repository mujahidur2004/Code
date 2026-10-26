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
        string s, t;
		cin >> s >> t;

	int n = s.size();
		int m = t.size();

		vector<int> frequency_in_t(26, 0);
		for (int i = 0; i < m; i++) 
        frequency_in_t[t[i] - 'A']++;

		for (int i = n - 1; i >= 0; i--)
        {
			if (frequency_in_t[s[i] - 'A'] > 0)
				frequency_in_t[s[i] - 'A']--;
			else
			s[i] = '.';
		}

		string final_string = "";
		for (int i = 0; i < n; i++) 
        {
			if (s[i] != '.')
				final_string += s[i];
		}

		if (final_string == t) 
        cout << "YES" << endl;
		else
			cout << "NO" << endl;

        
    }

    return 0;
}