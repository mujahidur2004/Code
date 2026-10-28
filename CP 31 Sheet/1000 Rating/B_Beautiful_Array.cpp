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
        ll n , k, b , s;
        cin >> n >> k >> b >> s;
        ll mini= k* b;
        ll maxi = mini + (k-1) * n;
        if(s < mini  || s > maxi){
            cout<< -1<<nl;
        }
        else{
            vector< ll > ansa(n,0);
            ansa[0]=mini;
            s-= mini;
            for(int i=0;i<n;i++){
                ll add = min(s,k-1);
                ansa[i]+= add;
                s-= add;
            }
            for (long long i = 0; i < n; i++)
				cout << ansa[i] << " ";
			cout << endl;
        }
        
    }

    return 0;
}