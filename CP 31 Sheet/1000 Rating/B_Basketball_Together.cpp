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

    int n , d;
    cin >> n >> d;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    int l=0,r= n-1;
    int ans=0, si=1;
    while(l <=r){
        if(a[r] * si <= d ){
            l++;
            si++;
        }
        else{
            ans++;
            si=1;
            r--;
        }
    }
    cout<< ans<<nl;

    

    return 0;
}